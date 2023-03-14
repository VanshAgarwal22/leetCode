class Solution {
public:
    string sortString(string s) {
        int n =s.size();
        string ans= "";
        vector<int>freq(30);
        
        for(auto i :s)
        {
            freq[i-'a']++;
            

        }
        
        while(n)
        {
            for(int i=0; i<26; i++)
            {
                if(freq[i]){
                    ans+=('a'+i);
                    freq[i]--;
                    n--;

                }

            }
            
             for(int i=25;i>=0;i--)
            {
                if(freq[i]){
                    ans+=('a'+i);
                    freq[i]--;
                    n--;

                }

            }
            
            
            

        }
        return ans;
        
    }
};