class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int n1= pref.size();
        
        for(auto it:words)
        {
            int p1=0,p2=0;
            int n2 = it.size();
            
            while(p1<n1 && p2<n2)
            {
                if(pref[p1]==it[p2]){
                    p1++;
                    p2++;

                }
                else
                {
                    break;

                }

            }
            if(n1==p1)
                count++;
            

        }
        return count;
        
    }
};