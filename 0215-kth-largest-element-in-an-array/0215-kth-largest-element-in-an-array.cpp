class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int n= nums.size();
        // sort(nums.begin(), nums.end());
        // return nums[n-k];
        //priority queue
        priority_queue<int>pq(nums.begin(), nums.end());
        int ans =0;
        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};