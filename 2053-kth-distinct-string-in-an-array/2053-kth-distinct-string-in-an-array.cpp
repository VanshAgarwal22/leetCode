class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string, int>mp;
       int counter =0;
        
        for(auto &i : arr)
        {
            mp[i]++;
        }
        for(auto &i : arr)
        {
            if(mp[i]>1)continue;
            counter++;
            if(counter==k)
                return i;
        }
        return "";
        
    }
};

