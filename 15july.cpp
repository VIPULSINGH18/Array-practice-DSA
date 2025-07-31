#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nge(vector<int> & arr){
    int n= arr.size();
	vector<int>ans(n,0);
	stack<int>s;
	for(int i=n-1;i>=0;i--){
		while(s.size()>0 && s.top()<=arr[i]){
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
	vector<int> arr={1,3,4,2};
	vector<int> result= nge(arr);
	for(int val:result){
		cout<<val<<" ";
	}
	return 0;
	
}
