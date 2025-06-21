/* count of subarray whose sum is equal to tar using brute force approach*/



#include<iostream>
#include<vector>
using namespace std;
int subarray(vector<int>&mat,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum= sum+mat[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> mat= {5,2,1,6,7};
    int n= mat.size();
    int k=14;
    cout<<subarray(mat,n,k);
    return 0;
}



