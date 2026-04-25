class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int lo=0,hi=n-1,mid=0;
        while(lo<hi)
        {
            int mid=(lo+hi)/2;
        if(mid%2==1) mid--;
        if(arr[mid]==arr[mid+1])
        lo=mid+2;
        else
         hi=mid;
        }
        return arr[lo]; 
    }
};