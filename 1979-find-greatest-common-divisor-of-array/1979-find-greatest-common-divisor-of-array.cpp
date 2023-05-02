
        class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n =nums.size();
        int mn= INT_MAX;
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            mn = min(mn ,nums[i]);
            mx =max(mx , nums[i]);
            
            
        }
        return gcd(mn ,mx);
        
        
        return 1;
    }
};


    