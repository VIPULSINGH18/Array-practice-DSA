#include<iostream>
#include<vector>
using namespace std;
vector<int> dnf(vector<int> &arr,int n){
    int mid=0;
    int low=0;
    int high=n-1;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    return arr;
    
}

int main(){
    vector<int> arr={2,1,0,2,2,1,0};
    int n= arr.size();
    vector<int> result=dnf(arr,n);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}
