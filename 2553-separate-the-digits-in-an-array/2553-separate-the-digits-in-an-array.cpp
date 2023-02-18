class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        
        for(int i =0; i<n; i++)
        {
            string str = to_string(nums[i]);
            reverse(str.begin() ,str.end());
            int n = str.size();
            int num = stoi(str);
            while(n--)
            {
                ans.push_back(num%10);
                num = num/10;

            }
            
            
        }
        return ans;
    }
};