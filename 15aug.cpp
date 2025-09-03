#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s= "aabaa";
string b= s;

reverse(s.begin(),s.end());

if(s==b){
	cout<<"yes it is palindrome";
}
else{
	cout<<"Not palindrome";
}
return 0;
}


