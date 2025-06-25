#include<iostream>;
using namespace std;

void helper(vector<vector<int>> &board,int row,int col,string path,int n,vector<string> ans,vector<vector<bool>>& vis){
	if(row<0 || col<0 || row=>n || col>=n || board[row][col]==0 || vis[r][c]==true){
		return ;
	}
	if(row==n-1 && col==n-1){
		ans.push_back(path);
		return;
	}
	
	
	vis[r][c]= true;
	
	helper(board,row+1,col,path+'D',n,ans); //downward
	helper(board,row,col+1,path+'R',n,ans); //rightward
	helper(board,row-1,col,path+'U',n,ans);//upward
	helper(board,row,col-1,path+'L',n,ans); //leftward
	
	vis[r][c]= false;  
	
}

vector<string>  rat_maze(vector<vector<int>>&board){
	int n= board.size();
	vector<string>ans;
	string path;
	vector<vector<bool>>vis(n,vec<bool>(n,false));
	helper(board,0,0,path+'',n,ans,vis);
	return ans;

}

int main(){
	vector<vector<int>> board={{1,0,0,0,},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
	vector<string> result= rat_maze(board);
	for(int val:result){
		cout<<result;
	}
	return 0;
}
