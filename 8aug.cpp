class Solution {
public:

    int search( vector<int>& inorder,int pre_idx,int left, int right){
        for(int i=left;i<=right;i++){
            if(pre_idx==inorder[i]){
                    return i;
            }
        }
        return -1;
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int &pre_idx,int left, int right){

        if(left>right){
            return NULL;
        }
            TreeNode* root= new TreeNode(preorder[pre_idx]);
            int in_idx= search(inorder,preorder[pre_idx],left,right);
            pre_idx++;

           root->left= helper(preorder,inorder,pre_idx,left,in_idx-1);
           root->right= helper(preorder,inorder,pre_idx,in_idx+1,right);
           return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n= preorder.size();
        int pre_idx=0;
        return helper(preorder,inorder,pre_idx,0,n-1);      
        
    }
};
