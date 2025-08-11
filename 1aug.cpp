
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
	
		// height of binary tree...
		int height(Node* root){
			if(root==NULL){
				return 0;
			}
			l_h=height(root->left);
			r_h=height(root->right);
			return max(l_h + r_h)+1;	
		}
		
		
		//count of nodes in binary tree...
		int count_of_node(Node* root){
			if(root==NULL){
				return 0;
			}
			l_c=count_of_node(root->left);
			r_c=count_of_node(root->right);
			return l_c+r_c+1;
		}
		
		
		
		// sum of nodes of binary tree....
		int sum_of_nodes(Node* root){
			if(root=NULL){
				return 0;
			}
			
			left_sum=sum_of_nodes(root->left);
			right_sum=sum_of_nodes(root->right);
			return left_sum+right_sum+root->data;
		}
		
		
		
	
int main(){
	vector<int> pre_order={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
	Node* root=binary_tree(pre_order);
	cout<<root->data<<endl;
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;
	return 0;
	
}
