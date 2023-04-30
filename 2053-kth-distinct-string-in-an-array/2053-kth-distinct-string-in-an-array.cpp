class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string, int>mp;
       int counter =0;
        
        for(auto &i : arr)
        {
            mp[i]++; //store the count of the strings
        }
        for(auto &i : arr)
        {
            if(mp[i]>1)continue;
            counter++;  //count increment if it is smaller than 1
            if(counter==k)    
                return i;  // return the output string which occur once at the correct position
        }
        return "";
        
    }
};

