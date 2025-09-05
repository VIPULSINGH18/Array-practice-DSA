class Solution {
public:

    int order=0;
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }
        if(root->left!=NULL){
       int l=  kthSmallest(root->left,k);
                if(l!=-1){
                return l;
                }
        }

        order++;
        if(order==k){
            return root->val;
        }
        

        if(root->right!=NULL){
       int r=  kthSmallest(root->right,k);
                if(r!=-1){
                return r;
                }
        }

        return -1;
        
    }
};
