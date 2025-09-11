class BSTIterator {
public:
    stack<TreeNode*>s;
    void helper(TreeNode* root){
        while(root!=NULL){
            s.push(root);
            root= root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    
    int next() {
        TreeNode* ans= s.top();
        s.pop();
        if(ans->right!=NULL){
            helper(ans->right);
        }
        return ans->val;
    }
    
    bool hasNext() {
        return s.size();
    }
};

