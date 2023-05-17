class Solution {
public:
    vector<int>ps(vector<int>& heights)
    {
        vector<int>ans;
        stack<int>st;
        int n = heights.size();
        
        for(int i=0; i<n; i++)
        {

            while(st.empty()==false && heights[st.top()]>=heights[i]){
                st.pop();

            }
            int ele =(st.empty())?-1:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        return ans;
        
        
    }
    
    vector<int>ns(vector<int>& heights)
    {
        vector<int>ans;
        stack<int>st;
        int n = heights.size();
        
        for(int i=n-1; i>=0; i--)
        {

            while(st.empty()==false && heights[st.top()]>=heights[i]){
                st.pop();

            }
            int ele =(st.empty())?n:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        reverse(ans.begin() ,ans.end());
        return ans;
        
        
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int res =0;
         int n = heights.size();
        vector<int>pp = ps(heights);
         vector<int>np = ns(heights);
        for(int i=0; i<n; i++)
        {
            int curr =(np[i]-pp[i]-1)*heights[i];
                res = max(res,curr);

        }
      
        return res;
        
    }
};