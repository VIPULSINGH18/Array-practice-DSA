/* solving 2sum using hashing and unordered map*/



#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int> two_sum(vector<int>&arr,int tar){
    vector<int>ans;
    unordered_map<int,int>m;
    int n= arr.size();
    for(int i=0;i<n;i++){
        int first= arr[i];
        int second= tar-first;
        if(m.find(second)!=m.end()){
            ans.push_back(m[second]);
            ans.push_back(i);
            return ans;
        }
        m[first]=i;
    }
    return ans;
}
    
int main(){
    vector<int>arr={4,2,3,7,9};
    int tar=5;
    vector<int> result= two_sum(arr,tar);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}

