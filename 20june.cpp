class Solution {
public:

bool isSafe(vector<string> &board,int row,int col,int n){
    for(int a=0;a<n;a++){
        if(board[row][a]=='Q'){
            return false;
        };
    }

    for(int b=0;b<n;b++){
        if(board[b][col]=='Q'){
            return false;
        };
    }

    for(int c=row, d=col; c>=0 && d>=0 ; c--,d--){
        if(board[c][d]=='Q'){
            return false;
        };
    }


    for(int c=row, d=col; c>=0 && d<n ; c--,d++){
        if(board[c][d]=='Q'){
            return false;
        };
    }

    return true;

}


void nqueens(vector<string>&board,int row,int n,vector<vector<string>> &ans){
    if(row==n){
        ans.push_back({board});
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nqueens(board,row+1,n,ans);n
            board[row][j]='.';
        }
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        nqueens(board,0,n,ans);
        return ans;
        
    }
};
