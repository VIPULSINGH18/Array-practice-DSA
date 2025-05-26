#include<vector>
#include<iostream>
using namespace std;
int mj(vector<int>&arr,int n){
	int freq=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(freq==0){
			ans=arr[i];
		}
		if(ans==arr[i]){
			freq++;
		}
		else{
			freq--;
		}
	} 

int cnt=0;
for(int i=0;i<n;i++){
    if(ans==arr[i]){
        cnt++;
    }
}
if(cnt>n/2){
    return ans;
}
else{
    return -1;
}
	
}
int main(){
	vector<int> arr={1,2,1,1,3,4,5};
	int n= arr.size();
	int result=mj(arr,n);
	cout<<result;
	return 0;	
}

