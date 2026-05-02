class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());

        int left = 0, right = arr.size() - 1;

        while(left < right) {
            int sum = arr[left] + arr[right];

            if(sum == 0) {
                result.push_back({arr[left], arr[right]});

                int l = arr[left], r = arr[right];

                while(left < right && arr[left] == l) left++;
                while(left < right && arr[right] == r) right--;
            }
            else if(sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }

        return result;
    }
};