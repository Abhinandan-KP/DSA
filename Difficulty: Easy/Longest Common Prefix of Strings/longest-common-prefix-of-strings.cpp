class Solution {
public:
    string longestCommonPrefix(vector<string> arr) {
        if(arr.empty()) return "";

        string prefix = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            while(arr[i].find(prefix) != 0) {
                prefix.pop_back();
                if(prefix.empty()) return "";
            }
        }

        return prefix;
    }
};