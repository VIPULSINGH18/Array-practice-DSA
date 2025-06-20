#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<vector<int>> three_sum(vector<int> &arr,int n,int tar){
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		if(i>0 && arr[i]==arr[i-1]){
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(j>0 && arr[j]==arr[j-1]){
				continue;
			}
			
			int k=j+1;
			int l= n-1;
			
			while(k<l){
				int sum= arr[i]+arr[j]+arr[k]+arr[l];
				if(sum>tar){
					l--;
				}
				else if(sum<tar){
					k++;
				}
				else{
					ans.push_back(arr[i],arr[j],arr[k],arr[l]);
					k++;
					l--;
					while(k>0 && arr[k]==arr[k-1]){
						k++;
					}
				}
			}
		}
	}
	return ans;	
}

int main(){
	vector<int> arr={2,1,4,5,3,8,9};
	int n= arr.size();
	int tar=12;
	vector<vector<int>> result= three_sum(arr,n,tar);
	int m= arr.size();
	int n= arr[0].size();
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
	}
	return 0;
	
}
