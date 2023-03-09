class Solution {
    public int countAsterisks(String s) {
        int ans =0;
        boolean isvalid =false;
          for(int i=0; i<s.length();i++)
        {
           if(s.charAt(i)=='|')
           {
               isvalid = !isvalid;

           }
              
              if(s.charAt(i) =='*' && isvalid==false)
              {
                  ans++;

              }

        
        }
        return ans;
        
    }
}