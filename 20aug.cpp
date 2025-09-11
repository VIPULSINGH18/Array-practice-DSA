class Solution {
public:
    TreeNode* prev=NULL;
    TreeNode* first=NULL;
    TreeNode* second= NULL;
    void Inorder(TreeNode* root){
        if(root==NULL){
            return;
        }

        Inorder(root->left);
        if(prev!=NULL && prev->val>root->val){
            if(first==NULL){
                first=prev;
            }
            second=root;
        }
        prev=root;
        Inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        Inorder(root);
        int temp= first->val;
        first->val= second->val;
        second->val= temp;
    }
};
