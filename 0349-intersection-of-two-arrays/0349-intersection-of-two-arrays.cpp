class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> res;
        set<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                     break;
                }
            }
        }
        //assing all the values of set into vector (as we need to return a vector)
        res.assign(ans.begin(),ans.end());
      
        return res;
    }
};