class Solution {
public:
   
        
    int minimumRounds(vector<int>& tasks) {
    unordered_map<int,int> m;
        int ans =0;
    for(int t : tasks) // count frequency
        ++m[t];
                                                           // 2->3  3->2  4->5

    for(auto &p : m){ 
        if(p.second == 1) 
            return -1; 
        
        else
        {
             if(p.second %3==0)
                 ans = ans+ p.second/3;  
            else{
                 ans+= p.second/3 +1;

            }
        }
       
        
    }
    return ans;
        
        
    }
};