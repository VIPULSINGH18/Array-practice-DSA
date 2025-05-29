#include<vector>
#include<iostream>
using namespace std;
int r_s(vector<int>&arr,int n,int st,int end,int tar){
    while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[st]<=arr[mid]){
        if(arr[st]<=tar && tar<=arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    
    else{
        if(arr[mid]<=tar && tar<=arr[end]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }

}
return -1;
}
int main(){
    vector<int> arr={4,5,0,1,2,3};
    int n=arr.size();
    int st=0;
    int end=n-1;
    int tar=2;
    int result=r_s(arr,n,st,end,tar);
    cout<<result;
    return 0;
}
