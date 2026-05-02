class Solution {
public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size() != b.size()) return false;

        unordered_map<int, int> freq;

        for(int x : a) freq[x]++;
        for(int x : b) {
            if(freq[x] == 0) return false;
            freq[x]--;
        }

        return true;
    }
};