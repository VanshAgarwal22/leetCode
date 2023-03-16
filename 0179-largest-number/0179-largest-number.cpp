class Solution {
public:
    
   static bool mycomp(string &s1,string &s2){
       if(s1+s2<s2+s2) return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
     string ans = "";
     vector<string>arr;
     for(int i=0;i<nums.size();i++){
        arr.push_back(to_string(nums[i]));
     }
     sort(arr.begin(),arr.end(),mycomp);
     for(int i=nums.size()-1;i>=0;i--){
         ans += arr[i];
     }
     int i=0;
     while(ans[i]=='0'){
         i++;
     }
     if(i==ans.size()) ans= "0"; 
     else ans = ans.substr(i);
     return ans;
    }
    
    
};