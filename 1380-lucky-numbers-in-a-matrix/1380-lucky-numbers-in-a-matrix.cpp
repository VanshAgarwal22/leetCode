class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
     int m=matrix.size();
     int n=matrix[0].size();
     int max_n=INT_MIN;
     for(int i=0;i<m;i++){
     int min_n=INT_MAX;
         for(int j=0;j<n;++j)
             min_n=min(min_n,matrix[i][j]);
             max_n=max(min_n,max_n);
     }
     int min_n=INT_MAX;
     for(int j=0;j<n;++j){
         int max_n=INT_MIN;
         for(int i=0;i<m;i++)
             max_n=max(max_n,matrix[i][j]);
             min_n=min(max_n,min_n);
     }
        if(min_n!=max_n) return vector<int> { };
        return vector<int>{min_n};
    }
};


// class Solution {
// public:
//     vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
//         vector<int>ans;
        
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         for(int i =0; i<row ;i++)
//         {
//             int mini  =10005;
//             int index =-1;
//             for(int j =0; j<col;j++)
//             {
//                 if(matrix[i][j]<mini)
//                 {
//                     mini =  matrix[i][j];
//                     index = j;

//                 }

//             }
            
//             int maxi = -1;
//             for(int j =0;j<row; j++)
//             {
//                 if(matrix[j][index]>maxi)
//                     maxi =matrix[j][index];

//             }
//             if(maxi==mini)
//             {
//                 ans.push_back(maxi);

//             }
            
            
//        }
//         return ans;
        
//     }
// };