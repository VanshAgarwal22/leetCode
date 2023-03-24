// class Solution {
// public:
//     //unusual character remove
//     bool valid(char ch)
//     {
//         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
//            {
//             return 1;
//            }
//            return 0;
         
//     }
    
//     //change into lower case
//       char lowercase(char ch)
//            {
//                if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))
//                {
//                    return ch;
//                }
//                else
//               {
//                     char temp = ch -'A'+'a';
//                    return temp;

//               }

           
//            }
//     //prllindrome check
           
//       bool checkpallin(string a)
//            {
//                int s =0;
//                int e =a.length()-1;
               
//                while(s<=e)
//                {
//                    if(a[s]!=a[e])
//                        return 0;
//                    else
//                    {
//                        s++;
//                        e--;

//                    }

//                } 
//                return 1;

//            }
          
//       // main calls here      
//     bool isPalindrome(string s) {
//         string temp = "";
//         for(int j =0; j<s.length(); j++)
//         {
//             if(valid(s[j]))
//         {
//             temp.push_back(s[j]);

//         }

//         }
        
//         //change into lower charcter
//         for(int j =0; j<temp.length(); j++ )
//         {
//             temp[j] = lowercase(temp[j]);
//         }
//         return checkpallin(temp);
        
//     }
// };


class Solution {
public:
    bool isPalindrome(string s) {
        
        int start=0, end=s.length()-1;
	    while(start<end) {
            
		if (!isalnum(s[start])) start++; 
//alnum  function in c++ help to check the alpha numeral characters likee (,;:/[] etc)
            
		else if (!isalnum(s[end])) end--;
            
		else 
        {

            if (tolower(s[start++])!=tolower(s[end--]))
                return false;
        }
       
	}
	return true;
    }
};