

#include<iostream>
using namespace std;
reverse(int num,int rev){
	int rem;
	if(num==0){
		return rev;
	}
	rem=num%10;
	
	rev=rev*10+rem;
	return(num/10);
}


int main(){
	int num= 12345;
	int rev=0;
	int result=reverse(num,rev);
	cout<<"Reverse number is: "<<endl;
	cout<<result;
	return 0;
	
}
