class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0;
        int ansindex =0;
        int n =chars.size();
        
        while(i<n)
        {
            int j =i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            
            // yha kab ayyge
            // y to  arraysize katam ho  gya ho
            // y fir kioi diff elemrnt aa agya ho 
            
            // so ab hum phlr store krege 
            chars[ansindex++] =chars[i];
            int count =j-i;
            
            
//character ko  string format m store karane k lia agar 9 se bara bhi  at h to  chae m single type store karane k lia ..
            if(count>1)
            {
                string cnt =to_string(count);
                for(char ch : cnt){
                    chars[ansindex++] =ch;

            }
            }
            i=j;
            

        }
        return ansindex;
        
    }
};