class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left =0;
        int top =0;
        int right =n-1;
        int bottom =n-1;
        int value =1;
        vector<vector<int>>nums(n, vector<int>(n,0));
        while(value<=n*n)
        {
            
            for(int i=left; i<=right; i++)
            nums[top][i] =value++;
                top++;
            
            
            for(int i=top; i<=bottom; i++)
                nums[i][right] =value++;
                right--;

            
            for(int i=right;i>=left;i--)
              nums[bottom][i]=value++;
                bottom--;
                

            for(int i=bottom;i>=top; i--)
             nums[i][left]=value++;
             left++;

            

        }
        return nums;
       
    }
};