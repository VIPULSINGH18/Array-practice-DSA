class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>d;
        vector<int>ans;
        int n= nums.size();
        for(int i=0;i<k;i++){
            while(d.size()>0 && nums[d.back()]<nums[i]){
                d.pop_back();
            }
            d.push_back(i);
        }

        ans.push_back(nums[d.front()]);

        for(int i=k;i<n;i++){
            for(int a=1;a<=3;a++){
            if(d.front() != i || d.front() != i-1 || d.front() != i-2){
                d.pop_front();
            }
            else{
                break;
            }
            }

            while(d.size()>0 && nums[d.back()]<nums[i]){
                d.pop_back();
            }
            d.push_back(i);
            ans.push_back(nums[d.front()]);

        }
        return ans;
        
    }
};

for(int a=1;a<=3;a++){
            if(d.front() != i || d.front() != i-1 || d.front() != i-2){
                d.pop_front();
            }
            else{
                break;
            }
            }
