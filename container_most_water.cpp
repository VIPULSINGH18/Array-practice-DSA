#include<iostream>
using namespace std;
void most_water(int arr[],int s){
	int st=0;
	int end=s-1;
	int area;
	int length;
	int breadth;
	int max_area=0;
	while(st<end){
		breadth= end-st;
		
		if(arr[st]<=arr[end]){
			length=arr[st];
			st++;
			
		}
		else if(arr[st]>arr[end]){
			length=arr[end];
			end--;
		}
		
		area= length*breadth;
		max_area=max(area,max_area);
		
		
		
	}
	cout<<"max water in the container: ";
	cout<<max_area<<"cm^2";
	
}


int main(){
	int arr[9]={1,8,6,2,5,4,8,3,7};
	int size= sizeof(arr)/4;
	most_water(arr,size);
	return 0;
	
}
