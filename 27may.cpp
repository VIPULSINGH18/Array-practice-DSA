#include<vector>
#include<iostream>
using namespace std;
vector<int> prd(vector<int>&arr,int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(arr[i]!=arr[j]){
                product=product*arr[j];
            }
        }
        ans.push_back(product);
        
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    vector<int>result=prd(arr,n);
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}


#include<vector>
#include<iostream>
using namespace std;
vector<int> prd(vector<int>&arr,int n){
	vector<int>prefix(n);
	vector<int>suffix(n);
	vector<int>ans(n);
	
	prefix[0]=1;
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]*arr[i-1];
	}
	
	suffix[n-1]=1;
	for(int j=n-2;j>=0;j--){
		suffix[j]=suffix[j+1]*arr[j+1];
	}
	
	for(int a=0;a<n;a++){
		ans[a]=prefix[a]*suffix[a];
		
	}
	
	return ans;
}
int main(){
	vector<int>arr={1,2,3,4,5};
	int n= arr.size();
	vector<int>result= prd(arr,n);
	for(int val:result){
		cout<<val<<" ";
	}
	return 0;
}
