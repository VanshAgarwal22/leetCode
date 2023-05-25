class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k = nums.size();
        int count =0;
        for(int i =0; i<k; i++)
        {
            int n =nums[i];
             if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
             {
                 count++;

             }

        }
        return count;
        
    }
};