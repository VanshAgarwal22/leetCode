class Solution {
public:
    
    bool palin(string s)
        {
            int l =0 ; 
            int r =s.length()-1;
            
           while(l<=r)
            {
                if(s[l++]!=s[r--])
                    return false;
            }
            return true;

        }
        
    string firstPalindrome(vector<string>& words) {
        string ans ="";
        for(int i=0;i<words.size();i++)
        {
            if(palin(words[i]))
            {
                ans =words[i];
                break;

            }

        }
        return ans;
        
        
    }
};