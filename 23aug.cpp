

// BFS Trraversal Algorithm of directed graph....
vector<int> bfs_traversal_graph(int v,vector<int> adj[]){
	queue<int>q;
	int vis[n]={0};
	vis[0]=1;
	q.push(0);
	vector<int> bfs;
	while(q.size()>0){
		int node= q.front();
		q.pop();
		bfs.push_back(node);
		
		for(auto it:adj[node]){
			if(vis[it]==0){
				q.push(it);
				vis[it]=1;
			}
		}
	}
	return bfs;
}
