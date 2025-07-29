#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stock_span(vector<int> & arr){
	vector<int>ans;
	stack<int>s;
	int n= arr.size();
	for(int i=0;i<n;i++){
		while(s.size()>0 &&arr[s.top()]<=arr[i]){
			s.pop();
		}
		
		if(s.size()==0){
			int span= i+1;
			ans.push_back(span);
		}
		else{
			int span= i-s.top();
			ans.push_back(span);
		}
		s.push(i);
		
	}
	return ans;
	
}

int main(){
	vector<int> arr={100,80,60,70,60,75,85};
	vector<int> result= stock_span(arr);
	for(int val:result){
		cout<<val<<" ";
	}
	return 0;
}
