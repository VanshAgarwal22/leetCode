class Solution {
public:
    int trap(vector<int>& height) {
        int water =0;
        int n= height.size();
        int lmax[n];
        lmax[0] =height[0];
        
        for(int i=1; i<height.size(); i++ )
        {
            int temp = max(height[i] ,lmax[i-1]);
                lmax[i] =temp;
        }
        int rmax[n];
        rmax[n-1] =height[n-1];
        
        for(int i= n-2; i>=0;i--)
        {
            int temp = max(height[i], rmax[i+1]);
            
            rmax[i] =temp;
            
        }
        for(int i =1; i<n-1; i++){
            water = water+ min(lmax[i] ,rmax[i])-height[i];

        }
        return water;
        
        
    }
};