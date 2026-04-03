class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
       sort(arr.begin(),arr.end());
  set<vector<int>> st;
       for(int i=0;i<n;i++)
       {
        if(i>0 && arr[i]==arr[i-1]) continue;
              int  left=i+1,right=n-1;
 while (left < right) {
int sum = arr[i] + arr[left] + arr[right];
        if(sum==0)
        { 
st.insert({arr[i], arr[left], arr[right]});
            left++,right--; 
        while(left<right && arr[left]==arr[left-1])
        left++;
        while(left<right && arr[right]==arr[right+1])
        right--;

        }
        else if(sum<0) left++;
        else
        right--;
       }
       }
     vector<vector<int>> ans(st.begin(), st.end());
       return ans;
    }
};