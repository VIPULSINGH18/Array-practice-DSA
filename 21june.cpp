class Solution {
public:

    bool isSafe(vector<vector<char>> &board,int row , int col,char dig){
        for(int i=0;i<9;i++){
            if(board[row][i]==dig){
                return false;
            }
        }

         for(int j=0;j<9;j++){
            if(board[j][col]==dig){
                return false;
            }
        }

        int srow= (row/3)*3;
        int scol= (col/3)*3;
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(board[i][j]==dig){
                    return false;
            }
        }
    }

    return true;
}

    bool solve_sudoku(vector<vector<char>> &board,int row , int col){
        if(row==9){
            return true;
        }
        int n_row=row;
        int n_col= col+1;
        
        if(n_col==9){
            n_row=row+1;
            n_col=0;
        }

        if(board[row][col] != '.'){
           return solve_sudoku(board,n_row,n_col);
        }

        for(char dig='1';dig<='9';dig++){
            if(isSafe(board,row,col,dig)){
                board[row][col]=dig;
                if(solve_sudoku(board,n_row,n_col)){
                    return true;
                };
                board[row][col]='.';
            }
        }

        return false;

    }

    void solveSudoku(vector<vector<char>>& board) {
        solve_sudoku(board,0,0);
    }
};
