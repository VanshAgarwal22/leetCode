class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        set<string> s;
		// set for "to" cities
        for(auto x:p)s.insert(x[1]);  // x= {from city, to city}
		// erasing "from" cities
        for(auto x:p)
        {
            if(s.count(x[0])>0)
            {
                s.erase(x[0]);

            }

        }
        
        for(string p : s)
        {
            return p;

        }
        
           return "";
    }
};