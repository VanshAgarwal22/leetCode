class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int index =0;
      stack<int>s;
         for(int value : pushed)
         {
             s.push(value);
             
             while(!s.empty() && popped[index]==s.top())
             {
                 s.pop();
                 index++;

             }
             

         }
        if(s.empty()==true)return true;
        return false;
        
        
    }
};