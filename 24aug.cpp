private:
	void dfs_traversal(int node,vector<int>&dfs,int piv[],vector<int>adj[]){
	piv[node]=1;
	dfs.push_back(node);
	for(auto it:adj[node]){
		if(piv[it]==0){
			dfs_traversal(it,dfs,piv,adj);
		}
	}
}

public:
	vector<int> dfs_of_graph(int v, vector<int> adj[]){
	int piv[v]={0};
	vector<int>dfs;
	int start_node=1;
	dfs_traversal(start_node,dfs,piv,adj);
	return dfs;
}
