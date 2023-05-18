class Solution {
public:
int countPrimeSetBits(int left, int right) {
// given constraint left , right <= 10^6

// 2^10 == 10^3  implies 10^6 ==2^20  ( 20 bits can be set at max )

vector<bool> p(20,false);

//set prime vector p
p[2]=p[3]=p[5]=p[7]=p[11]=p[13]=p[17]=p[19]=true;
    
int result=0;

for(int i=left;i<right+1;i++)
{
    int t=i,c=0;
    while(t)
    {
        c=c+(t&1);
        t=t>>1;
    }
    
    if(p[c]==true)
        result++;
}
return result;
}
};