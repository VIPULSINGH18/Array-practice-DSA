class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n= heights.size();
        vector<int>l_s(n,0);
        vector<int>r_s(n,0);
        stack<int>s;


        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }

        if(s.empty()){
            r_s[i]=n;
        }
        else{
            r_s[i]=s.top();
        }
        s.push(i);

    }

    while(!s.empty()){
        s.pop();
    }


    for(int i=0;i<n;i++){

        while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }

        if(s.empty()){
            l_s[i]=-1;
        }
        else{
            l_s[i]=s.top();
        }
        s.push(i);
    }

    int max_area=0;
    for(int i=0;i<n;i++){
        int width= r_s[i]-l_s[i]-1;
        int curr_area= heights[i]*width;
        max_area= max(curr_area,max_area);
    }
    return max_area;
    
    }
};
