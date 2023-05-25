
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i;
        while(nums.size()>1)
        {
            for(i=0 ; i<nums.size()-1 ; i++)
            {
                nums[i] = (nums[i]+nums[i+1])%10;
            }
            nums.erase(nums.begin()+nums.size()-1);   //for removing the last element
            
        }
        return nums[0];
    }
};