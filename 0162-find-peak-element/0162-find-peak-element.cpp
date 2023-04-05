class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
       int n =nums.size();
//         if(n==1)
//           return 0;
//        else if(n==2)
//         {
//            return (nums[0]>nums[1]?0:1);
            

//         }
//         else {
//             if(nums[0]>nums[1])
//                 return 0;
//             else if(nums[n-1]>nums[n-2])
//             {
//                 return n-1;

//             }

//         }
        
//         for(int i=1; i<n; i++)
//         {
//             if(nums[i]>nums[i-1]&& nums[i]>nums[i+1])
//             {
                
//                 return i;            }

//         }
//         return 0;
        
        
        int low =0; 
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if((mid==0 || nums[mid]>=nums[mid-1]) && (mid==n-1 || nums[mid]>=nums[mid+1]))
                return mid;
            
            else if(nums[mid]<=nums[mid+1])
            {
                low =mid+1;

            }
            else
            {
                high = mid-1;

            }
        }
        return -1;
        
    }
};