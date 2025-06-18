  int n=grid.size();
        int a;
        int b;
        int exp_sum=0;
        int act_sum=0;
        vector<int>ans;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                act_sum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
            }
        }

        exp_sum= (n*n)*(n*n+1)/2;
        b=exp_sum+a-act_sum;
        ans.push_back(b);
        return ans;
        
        
        
/* finding missing value and repeating value*/



#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
vector<int> m_r(vector<vector<int>>&arr){
    vector<int> ans;
    unordered_set<int>m;
    int o= arr.size();
    int n= arr[0].size();
    int actual_sum=0;
    int a;
    for(int i=0;i<o;i++){
        for(int j=0;j<n;j++){
            if(m.find(arr[i][j])!=m.end()){
                 a= arr[i][j];
                ans.push_back(a);
            }
            m.insert(arr[i][j]);
            actual_sum+=arr[i][j];
        }
    }
    
    int expected_sum= (n*n)*((n*n)+1)/2;
    int b= expected_sum+a-actual_sum;
    ans.push_back(b);
    return ans;
}
    
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,4},{7,8,9}};
    vector<int> result= m_r(arr);
    cout<<"repeating value:"<<result[0]<<endl;
    cout<<"missing value:"<<result[1];
    return 0;
    
}



/* FINDING DUPLICATE VALUES FROM THE ARRAY*/



#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int duplicate(vector<int>& arr,int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1;
    
}
int main(){
    vector<int> arr={4,6,2,3,6};
    int n=arr.size();
    cout<<duplicate(arr,n);
    return 0;
}

