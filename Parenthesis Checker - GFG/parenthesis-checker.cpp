//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        stack<char>s;
        int n = str.length();
        for(int i =0; i<n; i++)
        {
            if(str[i]=='('|| str[i]=='{'|| str[i]=='[')s.push(str[i]);
            else if(str[i]==')'|| str[i]=='}'|| str[i]==']')
            {
               if(s.empty())return false;
               else if(str[i]==')'&& s.top()!='(')return false;
               else if(str[i]=='}'&& s.top()!='{')return false;
               else if(str[i]==']'&& s.top()!='[')return false;
               else s.pop();
            }
        }
        if(s.empty())return true;
        else return false;

    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends