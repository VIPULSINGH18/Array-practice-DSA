
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> ans;
      while(root!=NULL){
        if(root->left==NULL){
            ans.push_back(root->val);
            root= root->right;
        }

        else{
            TreeNode* IP= root->left;
            while(IP->right!=NULL && IP->right!=root){
                    IP= IP->right;
            }
            if(IP->right==NULL){
                IP->right=root;
                root= root->left;
            }
            else{
                IP->right=NULL;
                ans.push_back(root->val);
                root= root->right;
            }
        }
      }
      return ans;
}  
};
