class Solution {
public:
    int alternateDigitSum(int n)
    {
        
        string str  = to_string(n);
            int sum=0;
        for(int i =0; i<str.size(); i++)
        {
            if(i%2==0)sum+=str[i]-'0';
            else sum-=str[i]-'0';
        }
        return sum;
    }
};

