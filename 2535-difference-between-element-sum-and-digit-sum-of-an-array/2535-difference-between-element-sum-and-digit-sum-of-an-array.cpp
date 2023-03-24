class Solution {
public:
     int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int k,sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        for(int j=0;j<n;j++)
         {
        while(nums[j] > 0)
         {
            k = nums[j] % 10;
            sum1 = sum1 + k;
            nums[j] = nums[j] / 10;
        }
         }
        return abs(sum-sum1);
    }
};