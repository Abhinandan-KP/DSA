class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
         int n = arr.size();
        set<vector<long long>> s;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                unordered_set<long long> p;

                for(int k = j + 1; k < n; k++) {

                    long long thi = (long long)target - ((long long)arr[i] + arr[j] + arr[k]);  // ✅ FIX

                    if(p.find(thi) != p.end()) {
                        vector<long long> temp = {(long long)arr[i], arr[j], arr[k], thi};
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }

                    p.insert(arr[k]);
                }
            }
        }

        vector<vector<int>> ans;
        for(auto &vec : s) {
            ans.push_back({(int)vec[0], (int)vec[1], (int)vec[2], (int)vec[3]});
        }

        return ans;
    }
};