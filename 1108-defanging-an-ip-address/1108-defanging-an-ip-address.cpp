class Solution {
public:
    string defangIPaddr(string a) {
        

        string s  ="";
        for(auto x : a)
        {
            if(x=='.')s+="[.]";
            else
            {
                s+=x;
            }

        }
        return s;
    }
};