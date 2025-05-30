/*b_s with iterative approach*/

#include<vector>
#include<iostream>
using namespace std;
int b_s(vector<int>&arr,int n,int st,int end,int tar){
	while(st<=end){
	int mid=st+(end-st)/2;
	if(tar>arr[mid]){
		st=mid+1;
	}
	else if(tar<arr[mid]){
		end=mid-1;
	}
	else{
		return mid;
	}
}
return -1;
		
}

int  main(){
	vector<int> arr={1,2,3,4,5,6,7};
	int n= arr.size();
	int st=0;
	int end= n-1;
	int tar=3;
	int result=b_s(arr,n,st,end,tar);
	cout<<result;
	return 0;	
}



/*b_s with recursive approach*/


#include<vector>
#include<iostream>
using namespace std;
int b_s(vector<int>&arr,int n,int st,int end,int tar){
	if(st<=end){
	int mid=st+(end-st)/2;
	if(tar>arr[mid]){
		return b_s(arr,n,mid+1,end,tar);
	}
	else if(tar<arr[mid]){
		return b_s(arr,n,st,mid-1,tar);
	}
	else{
		return mid;
	}
}
return -1;
		
}

int  main(){
	vector<int> arr={1,2,3,4,5,6,7};
	int n= arr.size();
	int st=0;
	int end= n-1;
	int tar=5;
	int result=b_s(arr,n,st,end,tar);
	cout<<result;
	return 0;	
}
