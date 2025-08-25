// transforming normal tree into sum tree...

#include<iostream>
using namespace std;

int sum_tree(Node* root){
	if(root==NULL){
		return 0;
	}
	int old_value= root->val;
	int left= sum_tree(root->left);
	int right= sum_tree(root->right);
	root->val=old_value+left+right;
	return root->val;
}

