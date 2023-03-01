//{ Driver Code Starts
//Initial Template for Java

//Initial Template for Java


/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


class Array {
    
    // Driver code
	public static void main (String[] args) throws IOException{
		// Taking input using buffered reader
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int testcases = Integer.parseInt(br.readLine());
		
		// looping through all testcases
		while(testcases-- > 0){
		    String line = br.readLine();
		    String[] element = line.trim().split("\\s+");
		    int sizeOfArray = Integer.parseInt(element[0]);
		     
		    int arr [] = new int[sizeOfArray];
		    
		    line = br.readLine();
		    String[] elements = line.trim().split("\\s+");
		    for(int i = 0;i<sizeOfArray;i++){
		        arr[i] = Integer.parseInt(elements[i]);
		    }
		    int K = Integer.parseInt(br.readLine());
		    
		    Complete obj = new Complete();
		    int ans = obj.minSwap(arr, sizeOfArray, K);
		    System.out.println(ans);
		}
	}
}

// } Driver Code Ends


//User function Template for Java



class Complete{
    
   
    // Function for finding maximum and value pair
    public static int minSwap (int arr[], int n, int k) {
      int fav=0;
       int nonfav=0;
       
       for(int i= 0; i<n; i++)
       {
           if(arr[i]<=k)fav++;
           
       }
       for(int j=0; j<fav; j++)
       {
           
           if(arr[j]>k)nonfav++;
       }
       
       int r =fav-1;
       int l =0;
       int result  = Integer.MAX_VALUE;
       
       while(r<n)
       {
             result =Math.min(result ,nonfav);
           r++;
           if(r<n && arr[r]>k)nonfav++;
           if(l<n && arr[l]>k)nonfav--;
           l++;
           
           
          
       }return (result == Integer.MAX_VALUE)?0:result;
    }
    
    
}
