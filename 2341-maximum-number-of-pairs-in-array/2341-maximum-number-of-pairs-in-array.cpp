class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n =nums.size();
        int count=0,count1 =0;
        for(int &i :nums)
            mp[i]++;
        
        for(auto &i :mp)
        {
            count+=(i.second/2);
            count1+=(i.second%2);
            

        }
        return {count, count1};
        
    
//         for(int i =0; i<n;i++)
//         {
//             for(int j =0; j<n; j++)
//             {
//                 if(i!=j && nums[i]>=0 && nums[j]>=0 && nums[i]==nums[j])
//                 {
//                     count++;
//                     nums[i] =-1;
//                     nums[j] =-1;

//                 }

//             }
//         }
        
//         for(int i =0; i<n; i++)
//         {
            
//             if(nums[i]>=0)
//                 count1++;
//         }
//         return {count ,count1};
        
        
    }
};