class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(auto i :words)
        {
            string str = s.substr(0,i.size());
                if(i==str)
                    count++;
        }
        return count;
        
    }
};
