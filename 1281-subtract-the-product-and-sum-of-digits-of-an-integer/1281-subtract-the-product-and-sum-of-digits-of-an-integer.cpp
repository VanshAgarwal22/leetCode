class Solution {
public:
    int subtractProductAndSum(int n) {
     int sum =1;
    int sum1 =0;
        while(n>0)
        {
            int k =n%10;
            sum*=k;
            sum1+=k;
            n =n/10;

        }
        int diff =(sum-sum1);
        return diff;
        
        
    }
};