

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        
        vector<bool> sorted(n - 1, false);
        int ans = 0;

        for (int j = 0; j < m; ++j) {
            bool must_delete = false;
          
            for (int i = 0; i < n - 1; ++i) {
                if (!sorted[i] && strs[i][j] > strs[i+1][j]) {
                    must_delete = true;
                    break;
                }
            }

            if (must_delete) {
                ans++;
            } else {
                for (int i = 0; i < n - 1; ++i) {
                    if (strs[i][j] < strs[i+1][j]) {
                        sorted[i] = true;
                    }
                }
            }
        }
        return ans;
    }
};