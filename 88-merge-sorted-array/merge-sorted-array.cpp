class Solution {
public:

// The gap starts at size n.
// The only way the gap gets smaller is when we take a number from nums2 .
// How many numbers are in nums2 ? Exactly n.
// Even if we take every single number from nums2 first, the gap only shrinks n times. 
// n-n=0
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=m-1;
      int j=n-1;
      int k=n+m-1;
      while(i>=0 && j>=0)  
      {
         if(nums1[i]>nums2[j])
         {
             nums1[k--]=nums1[i--];    
         }
         else
         {
             nums1[k--]=nums2[j--];
         }
      }
      while(j>=0)
      {
        nums1[k--]=nums2[j--];
      }
    }
};