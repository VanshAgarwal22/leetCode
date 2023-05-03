class Solution {
public:
    int minSteps(string s, string t) {
        map<char ,int>mp;
      
        for(auto i : s)
            mp[i]++;
        
        for(auto i :t)
            mp[i]--;
        
        int ans =0;
        
        for(auto it : mp)
        { 
            ans+=abs(it.second);
          
        }
        return ans;
            
            
        
        
    }
};