//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int m = array1.size();
        int n = array2.size();
        int i =0,j=0, k=0;
        int arr[m+n];
        while(i<m && j<n)
        {
            if(array1[i]<array2[j])
            {
            arr[k] =array1[i];
            i++;

            }
            
            else
            {
                arr[k] = array2[j];
                j++;
            }
            k++;
        }
        while(i<m)
        {
            arr[k] = array1[i];
            i++;
            k++;
        }
        while(j<n)
        {
            arr[k] =array2[j];
            k++;
            j++;
        }
        if((m+n)%2!=0)
        {
            return arr[(m+n)/2];
        }
        else
        {
            int x = (m+n)/2;
            double a =arr[x];
            double b =arr[x-1];
            return (a+b)/2;
        }
        
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends