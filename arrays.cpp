#include<iostream>
using namespace std;
int main(){
	int array[5]; /* initialisation of array*/
	int i;
	for (i=0;i<5;i++){
		cin>>array[i]; /*inserting elements inside array using indexing through loop*/
		
	}
	cout<<"Elements of array : "<<endl;
	for(i=0;i<5;i++){
		cout << array[i]<<" ";  /*accesssing elements of array using indexing through loop*/
	}
	return 0;
}





#include<iostream>
using namespace std;
int main(){
	int array_2[10];
	cout<<"Size of all elements inside an array : "<<sizeof(array_2)<<endl; /* it will show the total size of all elements present inside the array */
	cout<<"Size of array : "<<sizeof(array_2)/ sizeof(int); /* it will show the actual size of an array*/ 
	return 0;
}






#include<iostream>
using namespace std;
int main(){
	int array[5];
	int i;
	for(i=0;i<5;i++){
		cin>>array[i];
	}
	
	int smallest = INT_MAX; /* it is used to find the smallest value of an array*/
	
	for(i=0;i<5;i++){
		if(array[i]<smallest){
		 smallest = array[i];
		}
	}
	cout<<"Smallest element of an array : "<< smallest <<endl;
	
	return 0;
}






#include<iostream>
using namespace std;
int main(){
	int array[5]={12,14,3,4,57};
	int smallest = INT_MAX; /* it is used to find the smallest value of an array*/
	int i;
	for(i=0;i<5;i++){
		if(array[i]<smallest){
			smallest=array[i];
		}
	}
	cout<<"Smallest element: "<<smallest;
	return 0;
	
	
}





#include<iostream>
using namespace std;
int main(){
	int max_array[5]= {12,15,57,89,1};
    int i;
    int largest= INT_MIN; /* it is used to find the largest value of an array*/
    for(i=0;i<5;i++){
    	if(max_array[i]>largest){
    		largest = max_array[i];
		}
	}
	cout<<"Largest element of an array: "<< largest<<endl;
	return 0;
}









#include<iostream>
using namespace std;
int main(){
	int array[10];
	int i;
	int largest= INT_MIN ; /* it is used to find the largest value of an array*/
	for(i=0;i<10;i++){
		cin>>array[i];
	}
	
	for(i=0;i<10;i++){
		if( array[i] > largest ){
			largest = array[i];
		}
	
	}
	
	for(i=0;i<10;i++){  	/* this additional loop is used to print the index which contains largest value of an array*/
		if(array[i]== largest){
			cout<<i<<endl;
		}
	}
	cout<<"Largest element of an array is : "<< largest;
	
	
	return 0;
	
}

















