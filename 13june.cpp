/* pair of idx whose sum of value is equal to target*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> two_sum(vector<int>&arr,int tar){
    int n= arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])== tar){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={4,2,3,7,9};
    int tar=13;
    vector<int> result= two_sum(arr,tar);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}



/* it is two pointer approach but iw will give pair of idx of new sorted array*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> two_sum(vector<int>&arr,int tar){
    vector<int>ans;
    int n=arr.size();
    int smallest= 0;
    int largest= n-1;
    sort(arr.begin(),arr.end());
    while(smallest<largest){
        int sum= arr[smallest]+arr[largest];
        if(sum==tar){
            ans.push_back(smallest);
            ans.push_back(largest);
            return ans;
        }
        else if(sum>tar){
            largest--;
        }
        else{
            smallest++;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={4,2,3,7,9};
    int tar=13;
    vector<int> result= two_sum(arr,tar);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}


// the end

