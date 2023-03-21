class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        vector<pair<int ,int>> v;
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],i});
        }
        
        sort(v.begin(),v.end());
        
        
        for(int i=0;i<n-1;i++)
        {
            if(v[i].first == v[i+1].first)
            {
                if(abs(v[i].second-v[i+1].second)<=k)
                    return true;
            }
        }
        
        return false;
    }
};