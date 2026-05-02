class Solution {
public:
    int findMaxSum(vector<int>& arr) {
        int incl = 0; 
        int excl = 0; 

        for(int x : arr) {
            int new_excl = max(incl, excl);
            incl = excl + x;
            excl = new_excl;
        }

        return max(incl, excl);
    }
};