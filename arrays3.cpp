/* this is an example of linear search of an array where we print the index of an array where the target value is present*/


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
	
	
	
	
	

/* this code is for reversing the arrray elements using two pointer approach*/


#include<iostream>
using namespace std;
int reverse_array(int arr[5],int size){
	int start = 0; int end= size -1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	}
	
int main(){
	int arr[5]= {1,2,3,4,5};
	int size = 5;
	int i;
	cout<<"My original array: ";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
	reverse_array(arr,size);
	
	cout<<"My reversed array is: ";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}







#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec ;  /* initialising the vector*/
	vector<int>vec= {1,2,3};   /* initialising the vector*/
	vector<int>vec (5,0);   /*initialising the vector where size of vector is 5 and at every index 0 value is stored*/
	
	cout<<vec[0]<< endl;
	cout<<vec[1]<< endl;
	cout<<vec[2]<< endl;
return 0;
}





#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<char>vec (10,a);
	for(char i : vec){   /*using for loop inside vector gives us value instead of index*/
		cout<<i<<" ";
	}
	return 0;
	
}




#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec (5,2);
		for(int i:vec){
		cout<<i<<" "<<endl;
	}	
	
	cout<<"My vector size before push back : "<<vec.size()<<endl; /* to determine the size of vector*/
	
	vec.push_back(15); /* push back command is used to insert new value from the ending  of the vector*/
	vec.push_back(25);
	vec.push_back(35);
		for(int i:vec){
		cout<<i<<" "<<endl;
	}	
	
	cout<<"My vector size after push back: "<<vec.size()<<endl;
	vec.pop_back(); /* it is used to delete the element from ending side of a vecto*/
		for(int i:vec){
		cout<<i<<" "<<endl;
	}	
	cout<<"My vector size after pop back: "<<vec.size()<<endl;
	cout<<vec.front()<<endl; /* front tool is used to display the first element of vector*/
	cout<<vec.back()<<endl; /* back tool is used to display the last element of vector*/
	cout<<vec.at(3)<<endl; /* at command is used to display the element at particular index*/
	cout<<vec.at(6)<<endl;
	
	
	return 0;}
	
	



/* below code is used to print  single unique integer present inside the vector , if two or more than two unique integer is
 present then this code is not helpful that too much .. .*/

#include<iostream>
#include<vector>
using namespace std;

class ABC{
    public:
    int unique_number(vector<int>&vec){
        int ans = 0;
        for(int i:vec){
            ans=ans^i; /* n^n = 0 , n^0 = n */
        }
        return ans;
    }
};

int main(){
    ABC a; /* object creation*/
    vector<int>vec = {1,2,2,4,4,};
   int result=  a.unique_number(vec); /* function calling*/
   
   cout<<"Unique number is: "<<result<<endl; 
    return 0;
}
