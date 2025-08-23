// diameter of a binary_tree...

class Solution {
public:


    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }

       int left_height= height(root->left);
       int right_height= height(root->right);

      return max(left_height,right_height)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int left_d= diameterOfBinaryTree(root->left);
        int right_d= diameterOfBinaryTree(root->right);

        int l_h= height(root->left);
        int r_h= height(root->right);
        int curr_dm= l_h + r_h;

        return max(curr_dm,max(left_d,right_d));
        
    }
};
