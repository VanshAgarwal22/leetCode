class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> hash = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};

        int n = words.size();
        set<string>s;
        for(int i=0; i<n; i++)
        {
              string temp = "";
            for(int j =0; j<words[i].length(); j++)
            {
                temp+=hash[words[i][j]-'a'];
            }
            s.insert(temp);
            
        }
        return s.size();
        
    }
};










