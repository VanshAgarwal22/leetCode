class Solution {
public:
    int maxDepth(string s) {
        int count =0 ,ans =0;
        
        for(auto i:s)
        {
            
            if(i=='(')
            {
                count++;
                ans =max(ans, count);
            }
            else if(i==')')
            {
                count--;
            }

        }
        return ans;
        
    }
};