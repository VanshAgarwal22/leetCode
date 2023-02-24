class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row =matrix.size();
        int col = matrix[0].size();
        
        int s =0;
        int end = row*col-1;
        int mid =s + (end-s)/2;
        while(s<=end)
        {
        int element = matrix[mid/col][mid%col];
        if(element==target)
            return 1;
         if (element<target)
            s = mid+1;
        else
            end =mid-1;
            
            mid =s + (end-s)/2;
        }
        
        return 0;
        
        
    } 
};