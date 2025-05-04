#include<iostream>
using namespace std;
class Node{
	public:
		Node* next;
		Node* prev;
		int val;
		
	Node(int x){
		val=x;
		next=NULL;
		prev=NULL
	}
};

class Doubly_List(){
	Node* head;
	Node* tail;
	
	public:
		
		Doubly_list(){
			head= NULL;
			tail= NULL;
		}
		
		void push_front(int x){
			Node* new_node= new Node(x);
			
			if(head==NULL){
				head=tail=new_node;
			}
			
			else{
				new_node->next= head;
				head->prev= new_node;
				head= new_node;
			}
			
		}
		
		void push_back(int x){
			
			Node* new_node = new Node(x);
			
			if(head==NULL){
				head=tail=new_node;
			}
			
			else{
			tail->next=new_node;
			new_node->prev=tail;
			tail=new_node;
		}
			
			
		}
		
		void pop_front(){
			
			if(head==NULL){
				cout<<"ll is empty";
				return ;
			}
			
			
			Node* temp=head;
			head=head->next;
			if(head!=NULL){
			
			head->prev=NULL;
		}
			
			temp->next=NULL;
			delete temp;
		}
		
		void pop_back(){
			
			if(head==NULL){
				cout<<"ll is empty";
				return ;
			}
			
			Node* temp=tail;
			tail=tail->prev;
			if(tail!=NULL){
				tail->next=NULL;
			}
			temp->prev=NULL;
			delete temp;
		}
		
		
	
};
int main(){
	
	Doubly_List dll;
	dll.push_front(10);
	dll.push_back(10);
	dll.pop_front();
	dll.pop_back();
	return 0;
	
}
