class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0;
        int total_cost=0;
        for(int val:gas){
            total_gas+= val;
        }
        for(int val:cost){
            total_cost+= val;
        }

        if(total_gas<total_cost){
            return -1;
        }

        int cur_gas= 0;
        int start=0;
        for(int i=0;i<gas.size();i++){
             cur_gas= cur_gas +  gas[i]-cost[i];
             if(cur_gas<0){
                cur_gas=0;
                start= i+1;
             }
        }
        return start;
        
    }
};
