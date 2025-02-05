#include<iostream>
using namespace std;

	function(int n, int i){
		
		if(n>i & i>0){
		n*=i;
		
		
		}
		return(n,i--);
	}
	
int main(){
	int n=5;
	int i=n-1;
	function(n,i);
	return 0;

}
