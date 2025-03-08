/*below code is an example of linear search where we try to find at which index our target value is present in array and then print 
that index and if taregt value is not found then print -1*/



#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int target_value;
	int i;
	
	for(i=0;i<10;i++){
		cin>>arr[i];
	
	}
	
	cout<<"My array element is:";
	for(i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	cin>>target_value;
	cout<<"My target value : "<<target_value<<endl;
	
	for(i=0;i<10;i++){
		
		
		if(arr[i]== target_value){
			cout<<i<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
		
	}
	return 0;
}


/* below code is also an example of linaer search but in more optimised way and here we used function*/



#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
	
	for(int i=0;i<size;i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,4,5};
	
	int target;
	cout<<"My target value is: ";
	cin>>target;
	int size=5;
	
	cout<<linearsearch(arr,size,target)<<endl;
	
	
	return 0;
	}
	
	
	
	/* reverse of an array by using 2 pointer approach*/
		



