#include<iostream>
using namespace std;
#include<vector>
#include<stack>

vector<int> pse(vector<int> &arr){
    int n=arr.size();
    vector<int>ans(n,0);
    stack<int>s;
    for(int i=0;i<n;i++){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
        }
        return ans;
    }
    

int main(){
    vector<int> arr={3,1,0,8,6};
    vector<int> result=pse(arr);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
    
}

