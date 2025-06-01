#include<vector>
#include<iostream>
using namespace std;
int single(vector<int>&arr,int n,int st,int end){
    if(n==1){
        return arr[0];
    }
    
    while(st<=end){
        int mid= st+(end-st)/2;
        if(mid==0 && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid==n-1 && arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        
        if(mid%2!=0){
            if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        else{
            if(arr[mid-1]==arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> arr={1,1,2,2,3,3,4,4,5};
    int n=arr.size();
    int st=0;
    int end=n-1;
    int result=single(arr,n,st,end);
    cout<<result;
    return 0;
}
