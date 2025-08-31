class Solution {
public:
    TreeNode* next_element= NULL;
    void flatten(TreeNode* root) {

        if(root==NULL){
            return;
        }
        flatten(root->right);
        flatten(root->left);

        root->left=NULL;
        root->right=next_element;
        next_element= root;

    }

};
