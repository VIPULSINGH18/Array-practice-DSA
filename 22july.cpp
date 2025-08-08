class Solution {
public:
    int trap(vector<int>& arr) {
       int n = arr.size();
       int st=0;
       int end=n-1;
       int l_max= arr[0];
       int r_max= arr[n-1];
       int ans=0;
       while(st<end){
        if(arr[st]<arr[end]){
            ans+= min(l_max,r_max)-arr[st];
            st++;
        }
        else{
            ans+=max(l_max,r_max)-arr[end];
            l_max=arr[st];
            st++;
        }
       }
       return ans;       
    }
};
