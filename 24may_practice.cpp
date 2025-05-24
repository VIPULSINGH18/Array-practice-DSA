#include<vector>
#includ<iostream>
using namespace std;
int Majority_element(vector<int> &arr,int n){
	for(int val:arr){
		int freq=0;
		for(int elm:arr){
			if(val==elm){
				freq++;
			}
		}
		if(freq>n/2){
			return val;
		}
	}
	return -1;
	
}
int main(){
	vector<int> arr={1,2,4,4,4,4,5};
	int n= arr.size();
	int result=Majority_element(arr,n);
	cout<<result;
	return 0;	
}
