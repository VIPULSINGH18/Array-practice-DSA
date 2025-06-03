#include<iostream>
#include<vector>
using namespace std;
vector<int> Insertion(vector<int>&arr,int n){
    for(int i=1;i<=n-1;i++){
        int curr= arr[i];
        int prev= i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        
        prev++;
        arr[prev]=curr;
    }
    return arr;
    
}
int main(){
    vector<int> arr={7,6,3,2,1};
    int n= arr.size();
    vector<int> result = Insertion(arr,n);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}



#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int n,int st,int end){
    int piv=arr[end];
    int idx=st-1;
    for(int i=st;i<n-1;i++){
        if(arr[i]<=piv){
            idx++;
            swap(arr[idx],arr[i]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
        
}

vector<int> quick_sort(vector<int>&arr,int n,int st, int end){
    if(st<end){
    int piv_idx= partition(arr,n,st,end);
    quick_sort(arr,n,st,piv_idx-1);
    quick_sort(arr,n,piv_idx+1,end);
    }
    return arr;
    
}

int main(){
    vector<int>arr={7,6,5,3,1,2};
    int n=arr.size();
    int st=0;
    int end=n-1;
    vector<int> result=quick_sort(arr,n,st,end);
   for(int val:result){
       cout<<val<<" ";
   }
   return 0;
}



