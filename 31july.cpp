
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
		
		
		//pre order traversal...
		void preorder(Node* root){
			if(root==NULL){
				return ;
			}
			cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
			 
		}
		
		
		//inorder travesal....
		void inorder(Node* root){
			if(root==NULL){
				return ;
			}
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
			 
		}
		
		
		//post order travesal...
		void postorder(Node* root){
			if(root==NULL){
				return ;
			}
			
			postorder(root->left);
			postorder(root->right);
			cout<<root->data<<" ";
			 
		}
		
		
		//level orde traversal....
		void levelorder(Node* root){
			
			queue<Node*>q;
			q.push(root);


			while(q.size()>0){
				Node* curr= q.front();
				q.pop();
			    cout<<curr->data<<" ";
			    if(curr->left!=NULL){
			    	q.push(curr->left);
				}
				if(curr->right!=NULL){
					q.push(curr->right);
				}
			    	
		}
	}
		
		
		
	
int main(){
	vector<int> pre_order={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
	Node* root=binary_tree(pre_order);
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;
	return 0;
	
}
