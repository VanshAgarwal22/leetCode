
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, left(n+1), right(n+1);
        left[0] = 1; 
        right[n] = 1;
        for(int i=1; i<=n; i++) left[i] = nums[i-1] * left[i-1];
        for(int i=n-1; i>=0; i--) right[i] = nums[i] * right[i+1];
        for(int i=0; i<n; i++) {
            int val = left[i] * right[i+1];
            ans.push_back(val);
        }
        return ans;
    }
};