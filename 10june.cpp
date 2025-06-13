class Solution {
public:

    bool new_search(vector<vector<int>>& matrix, int target,int mid_row){
        int st=0;
        int n= matrix[0].size();
        int end=n-1;
        while(st<=end){
            int mid= st+(end-st)/2;
            if(matrix[mid_row][mid]==target){
                return true;
            }
            else if(target>matrix[mid_row][mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n= matrix[0].size();
        int st=0;
        int end=m-1;
        while(st<=end){
            int mid_row= st+(end-st)/2;
            if(matrix[mid_row][0]<= target && target<= matrix[mid_row][n-1]){
               return new_search(matrix,target,mid_row);

            }

            else if(target>matrix[mid_row][n-1]){
                st=mid_row+1;
            }

            else{
                end=mid_row-1;
            }
        }

        return false;
        
    }
};
