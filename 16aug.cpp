class Solution {
public:

    int ans= INT_MAX;
    TreeNode* prev= NULL;

    int minDiffInBST(TreeNode* root) {
        if(root==NULL){
            return INT_MAX;
        }

        int l_m= minDiffInBST(root->left);
        ans= min(ans,l_m);

        if(prev!=NULL){
            ans= min(ans,root->val-prev->val);
        }
        prev=root;

        int r_m= minDiffInBST(root->right);
        ans= min(ans,r_m);

        return ans;
        
        
    }
};
