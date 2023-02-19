class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums)
    {
    
        int n =nums.size();
        int i=0;
        int j=n-1;
    long long ans =0;
        
    while(i<j)
    {
        string s1 = to_string(nums[i++]);
        string s2 =to_string(nums[j--]);
        
        ans+=stoi(s1+s2);
        
    }
    string s1 =to_string(nums[i]);
    if(n%2!=0)
    ans+=stoi(s1);
        
      return ans;

    
        
    }
};