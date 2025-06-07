#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int> permutation(vector<int>&arr,int n){
    int piv=-1;
    for(int i=n-1;i>=1;i--){
        
        if(arr[i-1]<arr[i]){
            piv=i-1;
            swap(arr[piv],arr[n-1]);
            reverse(arr.begin()+ piv+1,arr.end());
            }
            
    }

if(piv==-1){
    reverse(arr.begin(),arr.end());
    return arr;
}

return arr;
}
int main(){
    vector<int>arr={1,5,4,3};
    int n=arr.size();
    vector<int> result = permutation(arr,n);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}
