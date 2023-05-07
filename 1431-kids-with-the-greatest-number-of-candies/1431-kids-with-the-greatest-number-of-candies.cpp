class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int n=candies.size();
    int maxx=0;
    for(int i=0; i<n ;i++)
    {
        maxx = max(candies[i] ,maxx);

    }
     for(int i=0;i<n; i++)
     {
         int temp =candies[i] + extraCandies;
         if(temp>=maxx){
        result.push_back(true);
         }
         else
         {
             result.push_back(false);

         }
          
     }
        
    return result;
        
    
        
    
        
    }
};