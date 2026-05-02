class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int i = 0, j = 0;
        int platforms = 0, maxPlat = 0;

        while(i < n && j < n) {
            if(arr[i] <= dep[j]) {
                platforms++;
                maxPlat = max(maxPlat, platforms);
                i++;
            } else {
                platforms--;
                j++;
            }
        }

        return maxPlat;
    }
};