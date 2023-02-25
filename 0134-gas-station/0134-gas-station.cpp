class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start =0;
        int current =0;
        int total =0;
        
        
        for(int i=0; i<gas.size(); i++)
        {
            current+= gas[i]-cost[i];
            total+=gas[i]- cost[i];
// check the element if negative the shift the start to the next gas element
            
            if(current<0)
            {
                start= i+1;
                current =0;
                
            }
        }
        return total<0?-1:start;
    }
};