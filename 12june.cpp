
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiral(vector<vector<int>> &mat){
    int m= mat.size();
    int n= mat[0].size();
    int srow= 0;
    int erow=m-1;
    int scol=0;
    int ecol=n-1;
    vector<int> ans;
    
    while(srow<=erow && scol<=ecol){
    for(int i=srow;i<=ecol;i++){
        ans.push_back(mat[srow][i]);
    }
    for(int j=srow+1;j<=erow;j++){
        ans.push_back(mat[j][ecol]);
    }
    for(int k= ecol-1;k>=scol;k--){
        if(srow==erow){
            break;
        }
        ans.push_back(mat[erow][k]);
    }
    for(int l=erow-1;l>=srow+1;l--){
         if(scol==ecol){
            break;
        }
        ans.push_back(mat[l][scol]);
    }
    
    srow++;
    scol++;
    erow--;
    ecol--;
}
return ans;
}

int main(){
    vector<vector<int>>mat= {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result= spiral(mat);
    for(int val:result){
        cout<<val<<" ";
}
return 0;
}
