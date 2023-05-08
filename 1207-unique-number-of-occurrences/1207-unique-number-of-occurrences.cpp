class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int  ,int>mp;
       unordered_set<int>s;
        
        for(auto &i:arr){
            mp[i]++;                               
        }
        
       for(auto &it : mp)
       {
          int freq = it.second;
           s.insert(freq);
           

       }
        if(s.size()==mp.size())return true;
        return false;
    }
};
