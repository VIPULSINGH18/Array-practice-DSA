/* below is an example of printing all subarray of a given array using class,function and nested loop  concept*/
/* Time complexity is 0(n^3)*/


#include<iostream>
#include<vector>
using namespace std;
class Subarray{
	public:
		int sub_array(int arr[],int size){
			for(int st=0;st<size;st++){
				for(int end=st;end<size;end++){
					for(int i=st;i<=end;i++){
						cout<<arr[i];
					}cout<<" ";
				}cout<<endl;
			}
		}
	};
	
	
		
int main(){
	Subarray s1;
	int arr[]={1,2,3,4,5};
	int size= 5;
	s1.sub_array(arr,size);
	return 0;
}


/* below code is an example of printing all subarray of an array using only nested loop*/
/* Time complexity is 0(n^3)*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={11,22,33,44,55};
	int n=5;
	for(int st=0;st<n;st++){
		for(int end=st;end<n;end++){
			for(int i=st;i<=end;i++){
				cout<<arr[i];
			}cout<<" ";
		}cout<<endl;
	}
	return 0;
}



/* below code is an example of printing maximum subarray sum with Brute force approach having time complexity 0(n^2)*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int max_sum = INT_MIN;
	for(int st=0;st<n;st++){
		int curr_sum=0;
		for(int end=st;end<n;end++){
			curr_sum+= arr[end];
			max_sum= max(curr_sum,max_sum);
			
			
		}
	}cout<<"Maximum subarray sum : "<< max_sum<<endl;
	return 0;
}




/* below code is an example of printing maximum subarray sum using Kadane's algorithm having time complexity 0(n) , using array...*/


#include<iostream>
#include<vector>

using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int max_sum= INT_MIN;
	int curr_sum=0;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		max_sum=max(curr_sum,max_sum);
		if(curr_sum<0){
			curr_sum=0;
		}
	}cout<<"Maximum subarray sum is : "<<max_sum<<endl;
	return 0;
}




/* below code is an example of printing maximum subarray sum using vector as a data structure implementing through Kadane's algorithm having
time complexity 0(n)...*/



#include<iostream>
#include<vector>
#include <climits> /* this header is necessary to use INT_MIN command*/

using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int n=5;
	int max_sum= INT_MIN;
	int curr_sum=0;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		max_sum=max(curr_sum,max_sum);
		if(curr_sum<0){
			curr_sum=0;
		}
	}cout<<"Maximum subarray sum is : "<<max_sum<<endl;
	return 0;
}








		

