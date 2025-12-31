class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& nums, int k) {
        // code here
          int n = nums.size();
        k = k% n; 
    
       reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

        reverse(nums.begin(), nums.end());
    
    }
};