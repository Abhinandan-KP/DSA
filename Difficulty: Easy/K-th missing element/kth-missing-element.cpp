class Solution {
  public:
    int KthMissingElement(vector<int> &a, int &k) {
        int n = a.size();
    int low = 0, high = n - 1;
 int x = (a[n - 1] - a[0]) - (n - 1);
        
        if (k > x) {
            return -1;
        }
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int missing = a[mid] - a[0]- mid;

        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return a[0]+ k + high;
    }
};