class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
       int ans =0;
        
        for(string s : sentences)
        {
            int count =1;
            for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
                count++;
        }
            ans = max(count ,ans);
        }
        return ans; 
    }
};