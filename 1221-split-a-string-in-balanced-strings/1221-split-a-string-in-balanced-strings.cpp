class Solution {
public:
    int balancedStringSplit(string s) {

    int count1 =0;
    int count2 =0;
    int bs =0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='R')count1++;
            else count2++;
            
            if(count1==count2)
            {
                bs++;
                count1 =0; 
                count2 =0;
                

            }

        }
        return bs;
    }
};