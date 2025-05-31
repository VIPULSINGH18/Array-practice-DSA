#include<vector>
#include<iostream>
using namespace std;
int peak(vector<int>&arr,int n,int st,int end){
    while(st<=end){
        int mid= st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={0,3,80,9,5,2};
    int n= arr.size();
    int st=1;
    int end=n-2;
    int result= peak(arr,n,st,end);
    cout<<"peak index: "<<result<<endl;
    cout<<"peak value: "<<arr[result];
    return 0;
}
