/* brute force approach to find count inversion*/



#include<iostream>
#include<vector>
using namespace std;
int cnt(vector<int> &arr){
    int n= arr.size();
    int inv_count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv_count++;
            }
        }
    }
    return inv_count;
}

int main(){
    vector<int> arr= {3,1,2,4,5};
    cout<<cnt(arr);
    return 0;
}
