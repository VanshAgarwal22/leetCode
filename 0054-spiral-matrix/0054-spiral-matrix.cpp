class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>ans;
        
        int row  = matrix.size();
        int col =matrix[0].size();
        
        int total = row*col;
        int count =0;
        
        int startrow =0;
        int startcol =0;
        int endrow = row-1;
        int endcol  =col-1;
        
        while(count<total)
        {
            //print startingrow
            
            for(int index= startcol; count<total&&index<=endcol;index++)
            {
                ans.push_back(matrix[startrow][index]);
                count++;
               

            } startrow++;
            // print the last column
            
            for(int index = startrow; count<total&&index<=endrow; index++)
            {
                ans.push_back(matrix[index][endcol]);
                count++;
                
            }
            endcol--;
            
            // ending row
            
            for(int index =endcol ;count<total&&index>=startcol; index--)
            {
                ans.push_back(matrix[endrow][index]);
                count++;

            }
            endrow--;
            
            // first column
            for(int index = endrow; count<total&&index>=startrow; index--)
            {
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
            
            
            
        }
        return ans;
        

        
    }
};