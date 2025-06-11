/* creation of the 2 d aarray, traversing 2 d array, linear search over 2 d array, maximum row sum , maximum column sum, diagonal sum, 2d vector..*/


/*creating 2d array*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/* traversingh 2d array*/

#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/* linear search over 2d array*/


#include<iostream>
using namespace std;
bool linear_search(int arr[3][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                return true;
            }
        }
    }
    return false;
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int key=20;
    cout<<linear_search(arr,row,col,key);
    return 0;
}


/* applying linear search over 2 d array and returning idx where the element is present*/


#include<iostream>
#include<vector>
using namespace std;
vector<int> linear_search(int arr[3][3],int row,int col,int key){
    vector<int>ans;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
    
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int key=3;
    vector<int> result=linear_search(arr,row,col,key);
    cout<<"pair of idx where element is: ";
    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}


#include<vector>
#include<iosteam>
using namespace std;


