class Solution {
public:

    set<vector<int>>s;
    void helper(vector<int> &arr,int idx, int n, int tar,vector<int> &cmb, vector<vector<int>> &ans){
        if(idx==n || tar<0){
            return ;
        }

        if(tar==0){
            if(s.find(cmb)==s.end()){
                ans.push_back({cmb});
                s.insert(cmb);
            }
            return;
        }

        
        cmb.push_back(arr[idx]);
        helper(arr,idx+1,n,tar-arr[idx],cmb,ans);
        helper(arr,idx,n,tar-arr[idx],cmb,ans);
        cmb.pop_back();
        helper(arr,idx+1,n,tar,cmb,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        int n= arr.size();
        vector<int>cmb;
        vector<vector<int>>ans;
        helper(arr,0,n,tar,cmb,ans);
        return ans;

        
    }
};
