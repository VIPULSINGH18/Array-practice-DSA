


#include<iostream>
using namespace std;
class A{
	
	int stack[5];
	int top=-1;
	int size= sizeof(stack);
	void push(int a){
		if(top>=size-1){
			cout<<"Stack is full";
		}
		else{
			top++;
			stack[top]= a;
		}
		
	}
	
	void pop(){
		if(top==-1){
			cout<<"Stack is empty";
		}
		else{
			top--;
		}
	}
	void top{
	cout<<stack[top];
	}
	
	void size(){
		cout<<top+1;
	}
};

int main(){
	
}







#include<iostream>
using namespace std;

int queue[5];
int start=-1;
int end=-1;
int size=5;
int curr_size=0;

void push(int x){
	if(size==curr_size){
		cout<<"queue is full";
	}
	
	else if(curr_size==1){
		start=0;
		end=0
	}
	else{
		end= (end+1)%size;
		queue[end]=x;
		curr_size++;
	}	
}

void pop(){
	if(curr_size==0){
		cout<<"queue is empty";
	}
	
	else if(curr_size==1){
		int el= queue[start];
		end=-1;
		start=-1;
		curr_size--;
	}
	
	else{
		start= start+1 % size;
		curr_size--;
	}
}

void top(){
	cout<<queue[start];
}

void size(){
	cout<<curr_size;
}


int main(){
	
}








#include<iostream>
using namespace std;

class A{
	Node* top=NULL;
	int size=0;
	
	void push(int x){
		Node* temp = new node(x);
		temp->next=top;
		top=temp;
		size++;
	}
	
	void pop(){
		Node* A= top;
		top=top->next;
		delete A;
		size--;
	}
	
	void top(){
		cout<<top->data;
	}
	
	void size(){
		cout<< size;
	}
};

int main(){
	
}




#include<iostream>
using namespace std;

class A{
	Node* start= NULL;
	Node* end= NULL;
	int size=0;
	
	void push(int x){
		Node* temp= new node(x);
		if(start== NULL){
			start=end=temp;
		}
		else{
			end->next=temp;
			size++;
		}
	}
	
	void pop(){
		if(start==NULL){
			cout<<"queue is empty";
		}
		else{
			Node* A= start;
			start= start->next;
			delete A;
			size--;
		}
		
	}
	
	void top(){
		if(start==NULL){
			cout<<"queue is empty";
		}
		
		else{
			cout<<start->data;
		}
		
	}
	
	void size(){
		cout<< size;
	}
};

int main(){
	
}



