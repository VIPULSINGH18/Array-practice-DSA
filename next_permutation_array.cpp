class Solution {
public:
    vector<int> nextPermutation(vector<int>& arr) {
        int piv=-1;
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                piv=i;
                break;
            }
        }
            if(piv==-1){
                reverse(arr.begin(),arr.end());
                return arr;
          }

          for(int i=n-1;i>piv;i--){
            if(arr[i]>arr[piv]){
                swap(arr[i],arr[piv]);
                break;
            }
          }

          int a=piv+1;
          int b=n-1;
          while(a<=b){
            swap(arr[a],arr[b]);
            a++;
            b--;
          }

          return arr;
        
    }
};
