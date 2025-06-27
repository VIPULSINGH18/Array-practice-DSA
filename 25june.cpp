#include<vector>
#include<iostream>
using namespace std;

void m_s(vector<int>&arr,int mid,int st,int end){
    vector<int> temp;
    int i= st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
            
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    
    while(j<=mid){
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
}

void merge(vector<int> &arr,int st,int end){
    if(st==end){
        return;
    }
    if(st<end){
        int mid= st+(end-st)/2;
        merge(arr,st,mid);
        merge(arr,mid+1,end);
        m_s(arr,mid,st,end);
    }
}
int main(){
    vector<int> arr= {5,1,2,7,3};
    int n= arr.size();
    merge(arr,0,n-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}

