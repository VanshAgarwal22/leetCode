class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f = INT_MAX;
        int s = INT_MAX;
        
        for(auto x: nums)
        {
            if(x<f)f =x;
            else if(f<x&&x<s)s =x;
            else if(s<x)return true;

        }
           
        return false;
        
    }
};