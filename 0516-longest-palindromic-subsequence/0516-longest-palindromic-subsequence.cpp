class Solution {
public:
int fun(int i,int j,string &s,vector<vector<int>> &dp){
    if(i>j) return 0;
    int t=-1e9,tt=-1e9,ttt=-1e9;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j])
    {
        if(i!=j)
        t=2+fun(i+1,j-1,s,dp);
        else t=1+fun(i+1,j-1,s,dp);
    }
    else 
        tt= max(fun(i+1,j,s,dp),fun(i,j-1,s,dp));
return dp[i][j]=max(t,tt);
    
}
    int longestPalindromeSubseq(string s) {
        if(s.size()==1) return 1;
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        return fun(0,s.size()-1,s,dp);
    }
};