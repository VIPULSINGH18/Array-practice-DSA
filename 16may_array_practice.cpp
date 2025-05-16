/*printing subarray


#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int n= sizeof(arr)/4;
	for(int st=0;st<n;st++){
		for(int end=st;end<n;end++){
			for(int idx=st;idx<=end;idx++){
				cout<<arr[idx];
			}
			cout<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}

*/


/* printing maximum subarray sum

#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,100};
	int n=sizeof(arr)/4;
	int max_sum=INT_MIN;
	for(int st=0;st<n;st++){
		int curr_sum=0;
		for(int end=st;end<n;end++){
			curr_sum+=arr[end];
			max_sum=max(curr_sum,max_sum);
		}
	}
	cout<<max_sum;
	return 0;
	
}

*/


/* using Kadanes Algorithm where time complexity is 0(n)*/

#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/4;
	int max_sum=INT_MIN;
	int curr_sum=0;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		max_sum=max(curr_sum,max_sum);
		if(curr_sum<0){
			curr_sum=0;
		}
	}
	cout<<max_sum;
	return 0;
}
