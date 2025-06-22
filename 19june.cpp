/* count of subarray whose sum is equal to tar using hashing aprroach (unordered map)*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int subarray(vector<int>&mat,int n,int k){
    vector<int>prefix;
    int count=0;
    unordered_map<int,int>m;
     int sum=0;
     
    for(int i=0;i<n;i++){
            sum= sum+mat[i];
            prefix.push_back(sum);
    }
    
    for(int j=0;j<n;j++){
        
        if(prefix[j]==k){
            count++;
        }
        
        int val= prefix[j]-k;
        
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        
        if(m.find(prefix[j]) == m.end()){
            m[prefix[j]]=0;
        }
        m[prefix[j]]++;
    }
    
    return count;
    
   
    
}
int main(){
    vector<int> mat= {5,2,1,6,7};
    int n= mat.size();
    int k=7;
    cout<<subarray(mat,n,k);
    return 0;
}
