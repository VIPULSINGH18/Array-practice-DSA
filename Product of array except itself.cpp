//brute force

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size= nums.size();
        vector<int> ans;
        for(int i=0;i<size;i++){
            int prod=1;
            for(int j=0;j<size;j++){
                if(i!=j){
                    prod=prod*nums[j];
                }
                

            }
            ans.push_back(prod);

        }
        return ans;

        
    }
};



// optimal solution

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int>prefix(size,1);
        vector<int>suffix(size,1);
        vector<int>ans(size,1);

        prefix[0]=1;
        for(int i=1;i<size;i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }

        suffix[size-1]=1;
        for(int j=size-2;j>=0;j--){
            suffix[j]=nums[j+1]*suffix[j+1];

        }

        for(int i=0;i<size;i++){
            ans[i]=prefix[i]*suffix[i];
        }

        return ans;


        
        
    }
};
