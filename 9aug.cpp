class Solution {
public:

    void tree_path(TreeNode* root,string path,vector<string> &ans){
          if(root->left == NULL && root->right== NULL){
            ans.push_back(path);
            return ;
        }
        if(root->left!=NULL){
            tree_path(root->left,path+"->"+to_string(root->left->val),ans);
        }
        if(root->right!=NULL){
            tree_path(root->right,path+"->"+to_string(root->right->val),ans);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
      string path= to_string(root->val);
      vector<string>ans;
      tree_path(root,path,ans);
      return ans;
    }
};
