class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n =matrix.size();
        int m =matrix[0].size();
        
        int rowindex =0; 
        int colindex =m-1;
        while(rowindex<n && colindex>=0)
        {
            if(matrix[rowindex][colindex]==target)
            {
                return 1;

            }
            else if(matrix[rowindex][colindex] < target)
            {
               rowindex++;

            }
            else
            {
                colindex--;

            }

        }
        return 0;

    }
};