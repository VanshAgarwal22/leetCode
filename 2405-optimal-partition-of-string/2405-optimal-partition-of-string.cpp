class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int p=0;
        for(char ch :s)
        {
            if(st.find(ch)==st.end())
            {
                st.insert(ch);
            }
            else
            {
                p+=1;
                st.erase(st.begin(), st.end());
                st.insert(ch);
            }

        }
        return p+1;
        
    }
};