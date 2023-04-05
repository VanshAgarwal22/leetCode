class Solution {
public:
    int longestPalindrome(string s) {
         bool odd = false;
        int result=0;
        unordered_map<char, int> ump;
        for(char ch : s) {
            ump[ch]++;
        }
       for(auto &c : ump){
           if(c.second % 2 ==0)result+=c.second;
            else{
                odd =true;
                result+=c.second-1;
                
                }
           
       }
        if(odd)result++;
        return result;
        
        
    }
};