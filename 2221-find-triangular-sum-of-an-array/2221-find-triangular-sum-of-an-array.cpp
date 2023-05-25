
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i;
        int n =nums.size();
        while(nums.size()>1)
        {vector<int>v;
            for(i=0 ; i<nums.size()-1 ; i++)
            {
                
                v.push_back((nums[i]+nums[i+1])%10);
            }
           n--; 
            nums =v;
            
        }
        return nums[0];
    }
};