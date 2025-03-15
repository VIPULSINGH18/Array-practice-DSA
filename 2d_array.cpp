//* displaying the whole output of 2d array*
//#include<iostream>
//using namespace std;
//int main(){
//
//int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//int rows=3;
//int cols=3;
//
//for(int i=0;i<rows;i++){
//	for(int j=0;j<cols;j++){
//		cout<<matrix[i][j];
//	}
//	cout<<endl;
//}	
//	return 0;
//}





//taking input inside the 2d array and then printing the output

//#include<iostream>
//using namespace std;
//int main(){
//
//int matrix[3][3];
//int rows=3;
//int cols=3;
//
//for(int i=0;i<rows;i++){
//	for(int j=0;j<cols;j++){
//		cin>>matrix[i][j];
//	}
//}
//	
//	for(int i=0;i<rows;i++){
//	for(int j=0;j<cols;j++){
//		cout<<matrix[i][j];
//	}
//	cout<<endl;
//	
//}	
//	return 0;
//}
//



// searching the element linearly in matrix and then printing the cell where it is present

//#include<iostream>
//using namespace std;
//void Linear(int arr[3][3],int tar){
//	int rows=3;
//	int cols=3;
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<cols;j++){
//			if(arr[i][j]==tar){
//				cout<<i<<","<<j;
//			}
//			
//		}
//	}
//	
//}
//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
//	int tar=8;
//	Linear(arr,tar);
//	return 0;
//	
//}



//displaying the maximum sum of row wise elements...
//
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int rows=3;
//	int cols=3;
//	int maxi= INT_MIN;
//	int sum;
//	
//	for(int i=0;i<rows;i++){
//		sum=0;
//		for(int j=0;j<cols;j++){
//			sum=sum+arr[i][j];
//			
//		}
//		maxi=max(sum,maxi);
//	}
//	
//	cout<<sum;
//	
//	return 0;	
//}




//displaying the maximum sum of column wise elements...


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int rows=3;
//	int cols=3;
//	int maxi= INT_MIN;
//	int sum;
//	
//	for(int i=0;i<cols;i++){
//		sum=0;
//		for(int j=0;j<rows;j++){
//			sum=sum+arr[j][i];
//			
//		}
//		maxi=max(sum,maxi);
//	}
//	
//	cout<<sum;
//	
//	return 0;	
//}




// finding the primary diagonal sum and secondary diagonal sum and then total sum of both primary and secondary...

//#include<iostream>
//using namespace std;
//void diagonal(int arr[3][3],int rows,int cols){
//	int sum=0;
//	int sums=0;
//	
//	if(cols%2==0 && rows%2==0){
//	
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<cols;j++){
//			if(i==j){
//				sum=sum+arr[i][j];
//			}
//		}
//	}
//	
//	cout<<"sum of pd: "<<sum<<endl;
//	
//	int i=0;
//	int j=cols-1;
//	while(i<=rows-1 && j>=0){
//	if(i>=0 && j<=cols-1){
//				sums=sums+arr[i][j];
//				i++;
//				j--;
//			}
//		}
//	cout<<"sum of sd: "<<sums<<endl;
//		
//	cout<<"total sum: "<<sum+sums;
//	}
//	
//	else{
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<cols;j++){
//			if(i==j){
//				sum=sum+arr[i][j];
//			}
//		}
//	}
//	cout<<"sum of pd: "<<sum<<endl;
//	
//	int i=0;
//	int j=cols-1;
//	while(i<=rows-1 && j>=0){
//	if(i>=0 && j<=cols-1){
//				sums=sums+arr[i][j];
//				i++;
//				j--;
//			}
//		}
//		cout<<"sum of sd: "<<sums<<endl;
//		
//		int a=rows/2;
//		int b=cols/2;
//		int cd= arr[a][b];
//		cout<<"total sum: "<<sum+sums-cd;
//	}	
//	
//}
//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int rows=3;
//	int cols=3;
//	diagonal(arr,rows,cols);
//	return 0;
//	
//}

