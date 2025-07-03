// knight tour configuration 

class Solution {
public:
    bool grind(vector<vector<int>> &arr,int row, int col,int n,int exp_val){

        if(row<0 || row>=n || col<0 || col>=n || arr[row][col]!=exp_val){
            return false;
        }

        if(exp_val==(n*n)-1){
            return true;
        }

        int ans1= grind(arr,row-2,col-1,n,exp_val+1);
        int ans2= grind(arr,row-2,col+1,n,exp_val+1);
        int ans3= grind(arr,row-1,col+2,n,exp_val+1);
        int ans4= grind(arr,row-1,col-2,n,exp_val+1);
        int ans5= grind(arr,row+1,col+2,n,exp_val+1);
        int ans6= grind(arr,row+1,col-2,n,exp_val+1);
        int ans7= grind(arr,row+2,col-1,n,exp_val+1);
        int ans8= grind(arr,row+2,col+1,n,exp_val+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;

    }

    bool checkValidGrid(vector<vector<int>>& arr) {
        int n= arr.size();
        return grind(arr,0,0,n,0);
    }
};

// the end
