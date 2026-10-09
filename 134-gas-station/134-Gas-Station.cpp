class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gain=0;
        int curr_tank=0;
        int start=0;
        int total=0;
        
        for(int i=0;i<gas.size();i++){
            gain =gas[i]-cost[i];
            total+=gain;
            curr_tank+=gain;
            if(curr_tank<0){
                start=i+1;
                curr_tank=0;
            }
        }
        if(total<0){
            return -1;
        }
        return start;
    }
};