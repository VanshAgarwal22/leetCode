class Solution {
public:
   
    string reversePrefix(string word, char ch) {
        int k=0;
        int j =0;
        int n = word.length();
        
        for(int i=0; i<n; i++)
        {
            if(word[i]==ch)
            {
                j=i;
                break;

            }

        }
        
        while(k<j)
        {
            swap(word[k++] ,word[j--]);
        }
        return word;
    }
};

