class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        
//panagram is a sentence in which each  alphsbets appear once  ,so here we retrun true if it a panagram otherwise return the false statement:
        
        int arr[26] ={0};
        //for counting the word and set the count in the aray
        for(int i=0 ; i<sentence.length(); i++)
        {
            arr[sentence[i] - 'a']++;

        }
        
        //now checking
        
        for(int i=0 ; i<26; i++)
        {
            
            //if count not equal to  1 or more then  return falsewe else true
            if(arr[i]==0)
            {
                return false;

            }

        }   
        return true;
        
    }
};