	// this algorithm is going to print only top view elements of the binary tree...
	
	
	void top_view(Node* root){
			queue<pair<Node*,int>>; //node and h_d
			map<int,int> //h_d and node value
			int d=0;
			q.push({root,d});
			while(q.size()>0){
				Node* curr= q.front().first;
				curr_hd= q.front().second;
				q.pop();
				if(m.find(curr_hd)== m.end()){
					m[curr_hd]=curr->data;
				}
				
				if(curr->left!=NULL){
				
				q.push({curr->left,d-1});
			}	
				if(curr->right!=NULL){
				
				q.push({curr->right,d+1});
		}
				
			}
			
			for(auto it:m){
				cout<<it.second()<<" ";
			}
			cout<<endl;
			
		}
		
int main(){
	top_view(root);
}
		
