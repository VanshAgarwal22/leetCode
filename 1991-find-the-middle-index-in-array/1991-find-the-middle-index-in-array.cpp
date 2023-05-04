class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n =nums.size();
        int sum =0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];

        }
        int currelement =0;
        
        for(int i=0; i<n; i++)
        {
            if(currelement ==sum-currelement -nums[i])
            {
                return i;
                
            }
            currelement+=nums[i];

        }
        return -1;
       
    }
};


