// this code builds the binary tree from the scratch using pre-order_sequence;


#include<iostream>
#include<vector>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
	Node(int val){
			data=val;
			left=right=NULL;
		}
	};
		static int idx= -1;
		Node * binary_tree(vector<int> &pre_order){
			idx++;
			
		if(pre_order[idx]==-1){
			return NULL;
		}
			Node * root= new node(pre_order[idx]);
			root->left= binary_tree(pre_order);
			root->right= binary_tree(pre_order);
			return root;
		}
		
	
int main(){
	vector<int> pre_order={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
	Node* root=binary_tree(pre_order);
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;
	return 0;
	
}
