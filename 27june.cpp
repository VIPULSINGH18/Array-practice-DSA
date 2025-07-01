#include<vector>
#include<iostream>
using namespace std;

int merge_sort(vector<int> &arr, int st, int end, int mid){
    int i= st;
    int j= mid+1;
    int inv_count=0;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            inv_count+= (mid-i+1);
        }
    }
        
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int idx=0;idx<temp.size();idx++){
            arr[idx+st]=temp[idx];
        }

    return inv_count;
}

int merge(vector<int> &arr,int st,int end){
 

    if(st<end){
        int mid= st+(end-st)/2;
        int l_c= merge(arr,st,mid);
        int r_c= merge(arr,mid+1,end);
        int count = merge_sort(arr,st,end,mid);
        return l_c+r_c+count;
    }
    return 0;
}

int main(){
    vector<int> arr={3,1,5,2,6,7};
    int n= arr.size();
    cout<<merge(arr,0,n-1);
    return 0;
}

