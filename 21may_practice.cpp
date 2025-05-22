#include<vector>
#include<iostream>
using namespace std;
vector<int> pair_sum(vector<int>&arr,int n,int tar){
	vector<int>temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==tar){
				temp.push_back(i);
				temp.push_back(j);
				return temp;
		}
			
		}
	}
	return temp;
	
}
int main(){
	vector<int> arr={1,2,3,4,5};
	int size= arr.size();
	int tar=3;
	vector<int> ans=pair_sum(arr,size,tar);
	cout<<"pair of idx whose sum of value is equal to target : ";
	for(int val:ans){
		cout<<val<<" ";
	}
	return 0;	
}





#include<vector>
#include<iostream>
using namespace std;
vector<int> pair_sum(vector<int>&arr,int st,int end,int tar){
	vector<int>ans;
	while(st<end){
		int p_sum=arr[st]+arr[end];
		if(p_sum<tar){
			st++;
		}
		else if(p_sum>tar){
			end--;
		}
		else{
			ans.push_back(st);
			ans.push_back(end);
			return ans;
		}
	}
	return ans;
	
}

int main(){
	vector<int>arr={1,2,3,4,5,6};
	int size=arr.size();
	int tar=8;
	int st=0;
	int end=size-1;
	vector<int>result=pair_sum(arr,st,end,tar);
	cout<<"pair of idx whose sum of value is equal to target : ";
	for(int val:result){
		cout<<val<<" ";
	}
	return 0;
	
}
