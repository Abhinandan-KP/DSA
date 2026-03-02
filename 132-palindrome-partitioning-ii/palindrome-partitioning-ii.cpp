#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    int minCutsHelper(const string& s, int start, vector<int>& memo) {
        int n = s.size();

        if (start == n || isPalindrome(s, start, n - 1))
            return 0;

        if (memo[start] != -1)
            return memo[start];

        int minCuts = INT_MAX;

        for (int end = start; end < n; end++) {
            if (isPalindrome(s, start, end)) {
                int cuts = 1 + minCutsHelper(s, end + 1, memo);
                minCuts = min(minCuts, cuts);
            }
        }

        return memo[start] = minCuts;
    }

public:
    int minCut(string s) {
        int n = s.size();
        vector<int> memo(n, -1);
        return minCutsHelper(s, 0, memo);
    }
};