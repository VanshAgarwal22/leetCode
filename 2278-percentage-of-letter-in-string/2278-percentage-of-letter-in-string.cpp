class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n =s.size();
        int count= 0;
        for(auto x : s){
            if(x==letter)
            {
                count++;
            }

        }
        return count*100/n;
        
    }
};