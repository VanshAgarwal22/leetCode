class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
     
        vector<int>ans;
        for(int i =0; i<n; i++)
        {
            int a =-1;
            for(int j=0; j<n; j++) // for matching the key
            {
              if(abs(i-j)<=k && nums[j]==key)
              {
                  a =i;
              }
            }
            if(a!=-1)
            {
                ans.push_back(a);
            } 
        }
        return ans;  
    }
};
