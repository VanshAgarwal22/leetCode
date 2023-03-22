class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans =0;
        long long count =0;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[i]==0)
                count++;
            else
            {
                ans+=((count*(count+1))/2);
                count =0;
            }
            

        }
        if(count!=0)
        {
            ans+=((count*(count+1))/2);

        }
        return ans;
        
    }
};