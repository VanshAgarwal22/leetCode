
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
        long long maxy = 0, conver = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            maxy = nums[i] > maxy ? nums[i] : maxy;
            conver = maxy + nums[i];
            sum += conver;
            ans.push_back(sum);
        }
        return ans;
    }
};
