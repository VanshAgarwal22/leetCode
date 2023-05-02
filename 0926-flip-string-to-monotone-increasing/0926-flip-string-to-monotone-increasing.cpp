class Solution {
public:
    int minFlipsMonoIncr(string s) {
          int cf =0,c1 =0;
        
        for(int i=0;i<s.length(); i++)
        {
            if(s[i]=='1')
                c1++;
            else
                cf++;
            cf = min(c1,cf);
            
        }
        return cf;
    }
};
