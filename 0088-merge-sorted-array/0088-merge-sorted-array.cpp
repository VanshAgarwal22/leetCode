class Solution {
public:
   void merge(vector<int>& arr, int m, vector<int>& arr2, int n) {
        int i=0,j=0;
        vector<int>v(m+n);
        int k=0;
        while(i<m and j<n){
            
           if(arr[i]<arr2[j])v[k++]=arr[i],i++;
           else {
               v[k++]=arr2[j],j++;
           }
        }
        while(i<m)v[k++]=arr[i++];
          while(j<n)v[k++]=arr2[j++];
        
        for(int i=0;i<m+n;i++)arr[i]=v[i];
    }
};

