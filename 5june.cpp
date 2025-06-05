#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&arr_1,vector<int>&arr_2){
    int m= arr_1.size();
    int n= arr_2.size();
    arr_1.resize(m+n);
    int idx= m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr_1[i]>arr_2[j]){
            arr_1[idx]=arr_1[i];
            idx--;
            i--;
        }
        else{
            arr_1[idx]=arr_2[j];
            idx--;
            j--;
        }
    }
    
    while(j>=0){
        arr_1[idx]=arr_2[j];
        idx--;
        j--;
    }
    
    return arr_1;
  
}
int main(){
    vector<int> arr_1={2,4,6,9};
    vector<int> arr_2={3,5,7};
    vector<int> result = merge(arr_1,arr_2);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}
