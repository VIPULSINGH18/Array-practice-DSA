/* maximum row sum*/


#include<iostream>
#include<climits>
using namespace std;
int max(int arr[2][3],int row,int col){
    int max_row_sum=INT_MIN;
    for(int i=0;i<row;i++){
        int row_sum=0;
        for(int j=0;j<col;j++){
            row_sum= row_sum+arr[i][j];
            max_row_sum = max(row_sum,max_row_sum);
        }
    }
    return max_row_sum;
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,4,5}};
    int row=3;
    int col=3;
    cout<<max(arr,row,col);
    return 0;
}


/*maximum column sum*/



#include<iostream>
#include<climits>
using namespace std;
int max(int arr[2][3],int row,int col){
    int max_row_sum=INT_MIN;
    for(int j=0;j<col;j++){
        int row_sum=0;
        for(int i=0;i<row;i++){
            row_sum= row_sum+arr[i][j];
            max_row_sum = max(row_sum,max_row_sum);
        }
    }
    return max_row_sum;
    
}
int main(){
    int arr[3][3]={{4,2,3},{4,5,6},{7,4,5}};
    int row=3;
    int col=3;
    cout<<max(arr,row,col);
    return 0;
}



/*diagonal sum of even 2d array*/

#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
    int row=4;
    int col=4;
    int pd=0;
    int sd=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                pd= pd+arr[i][j];
            }
            else if(j==col-1-i){
                sd= sd+arr[i][j];
            }
        }
    }
    cout<<pd+sd;
    return 0;
}




/*diagonal sum of odd 2d array*/
#include<iostream>
using namespace std;
int main(){
int arr[3][3]={{4,2,3},{4,5,6},{7,4,5}};
int row=3;
int col=3;
int pd=0;
int sd=0;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
if(i==j){
pd= pd+arr[i][j];
}
else if(j==col-1-i){
sd= sd+arr[i][j];
}
}
}
cout<<pd+sd;
return 0;
}


