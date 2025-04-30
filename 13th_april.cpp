#include<iostream>
using namespace std;

class Node{
	public:
		int val;
		Node* next;
		
	Node(int x){
		val=x;
		next=NULL;
		
		
	}
};


class List{

	Node* head;
	Node* tail;
	public: 
	 
	List(){
		 head= NULL;
		 tail= NULL;
	}
	
	void push_front(int val){
		Node* newnode= new 	Node(val);
		if(head=  NULL){
			head=tail=new_node;
			return; 
		}
		
		else{
			newnode->next=head;
			head=newnode;
			
			
		}
		
		
	}
	
	void push_back(int val){
		Node* newnode= new Node(val);
		if(head=  NULL){
			head=tail=new_node;
			return;
		}
		
		else{
			 tail->next=newnode;
			 tail=tail->next;
			 tail->next=NULL;
			
		}
		
	}
	
	
	void pop_front(){
		
		if(head==NULL){
			cout<<"Link list empty";
			return;
		}
		
		else{
		
		
		Node* temp;
		temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}
}
	
	void pop_back(){
		
			if(head==NULL){
			cout<<"Link list empty";
			return;
		}
		
		else{
			Node* temp;
			temp=head;
			
			while(temp-next!=tail){
				temp=temp->next;
			}
			temp->next=NULL;
			delete tail;
			tail=temp;
			
		}
		
	}
	
	
	void print_ll(){
		Node* temp;
		temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
	}
	
	void insert(int x,int pos){
		if(pos<0){
			cout<<"invalid pos";
		}
		
		else if(pos==0){
			push.front(x);
		}
		
		Node* new_node= new Node(x);
		
		Node* temp=head;
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
			
		}
		
		new_node->next=temp->next;
		temp->next=new_node;	
	}
	
	int search(int key){
		
			if(head==NULL){
			cout<<"Link list empty";
			return;
		}
		
		else{
		
		
		Node*temp=head;
		int idx=0;
		
		while(temp!=NULL){
			if(temp->data==key){
				return idx;
			}
			idx++;
			
		} 
		
	}
	return -1;
}
};


int main(){
	List ll;
	ll.push_front(1);
	ll.push_back(10);
	ll.print();
	ll.pop_front();
	
}
