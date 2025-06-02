#include<vector>
#include<iostream>
using namespace std;
vector<int> bubble(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        bool swapping=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapping=true;
            }
        }
        if(swapping==false){
            return arr;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={5,2,3,1};
    int n=arr.size();
    vector<int> result=bubble(arr,n);
    for(int val:result){
        cout<<val<<"";
    }
    return 0;
    
}





#include<vector>
#include<iostream>
using namespace std;
vector<int> selection(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[si]>arr[j]){
            si=j;
        }
        }
        swap(arr[i],arr[si]);
    }
    return arr;
    
}
int main(){
    vector<int>arr={5,2,3,1};
    int n=arr.size();
    vector<int> result=selection(arr,n);
    for(int val:result){
        cout<<val<<"";
    }
    return 0;
    
}
