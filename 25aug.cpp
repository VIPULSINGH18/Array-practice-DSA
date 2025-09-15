class Solution {
    private:
    void dfs(int node,vector<int>&piv,vector<int>adj[]){
                piv[node]=1;
                for(auto it:adj[node]){
                    if(piv[it]==0){
                        dfs(it,piv,adj);
                    }
                }
    }
    public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int> piv(n,0);
        for(int i=0;i<n;i++){
            if(piv[i]==0){
                count++;
                dfs(i,piv,adj);
            }
        }
    return count;
        
    }
};

