class Solution {
public:
    int nextGreaterElement(int num) 
    {

      vector<int>v;

      while(num>0)
      {
          v.push_back(num%10);
          num/=10;
      } 
       
      reverse(v.begin(),v.end());

      int n=v.size();
    

      int i=n-1;
     while(i>=1 && v[i-1]>=v[i] )
     {
      i--;
     }

      if(i==0)
         return -1;
       int m=INT_MAX;
       int index=0;

       for(int j=i-1;j<n;j++)
       {
           if(v[j]>v[i-1] )
           {
                  index=j;
           }
       }
     

      swap(v[i-1],v[index]);

      sort(v.begin()+i,v.end());

      long long ans=0;

 
      for(int ind=0;ind<n;ind++)
      {
        ans*=10;
        ans+=v[ind];

      }
      cout<<ans;
//2147483647

       if(ans>INT_MAX)
        return -1;


        return (int)ans;





        
    }
};
