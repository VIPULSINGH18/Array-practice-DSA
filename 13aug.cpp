class Solution {
public:

    TreeNode* helper(vector<int> &arr,int st,int end){
        if(st>end){
            return NULL;
        }

        int mid= st+(end-st)/2;
        TreeNode* root= new TreeNode(arr[mid]);
        root->left= helper(arr,st,mid-1);
        root->right= helper(arr,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int st=0;
        int end= arr.size()-1;
        return helper(arr,st,end);
        
    }
};
