class Solution {
  public:
    int searchInsertK(vector<int> &arr, int target) {
        int start = 0, end = arr.size() - 1;
int ans = arr.size();   

while (start <= end)
{
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;  
    }
    else if (arr[mid] < target)
    {
        start = mid + 1;
    }
    else
    {
        ans = mid;       
        end = mid - 1;
    }
}

return ans;   
    }
};