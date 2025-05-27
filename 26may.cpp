



#include<vector>
#include<iostream>
#include <climits> 
using namespace std;
int max_cnt(vector<int>&arr,int n){
    int max_water= INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int width= j-i;
            int length= min(arr[i],arr[j]);
            int curr_water= width*length;
            max_water= max(max_water,curr_water);
        }
        
        
    }
    return max_water;
    
}
int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int n= arr.size();
    int result=max_cnt(arr,n);
    cout<<result;
    return 0;
}





#include<vector>
#include<iostream>
#include <climits> 
using namespace std;

int max_cnt(vector<int>&arr,int n){
    int st=0;
    int end=n-1;
    int max_water= INT_MIN;
    while(st<end){
        int width= end-st;
        int length= min(arr[st],arr[end]);
        int curr_water= width*length;
        max_water= max(curr_water,max_water);
        if(arr[st]<arr[end]){
            st++;
        }
        else{
            end--;
        }
        
    }
    return max_water;
}

int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int n= arr.size();
    int result=max_cnt(arr,n);
    cout<<result;
    return 0;
}

