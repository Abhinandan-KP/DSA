#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mp[7][7];
    unordered_map<string, bool> dp;

    bool pyramidTransition(string x, vector<string>& y) {
        memset(mp, 0, sizeof(mp));

        for (auto &z : y)
            mp[z[0]-'A'][z[1]-'A'] |= (1 << (z[2]-'A'));

        dp.clear();
        return solve(x, "");
    }

    bool solve(string x, string y) {
        if (x.size() == 1)
            return true;

        if (y.size() + 1 == x.size())
            return solve(y, "");

        string z = x + "." + y;
        if (dp.count(z))
            return dp[z];

        int i = y.size();
        int a = x[i] - 'A';
        int b = x[i + 1] - 'A';

        int mask = mp[a][b];

        for (int k = 0; k < 7; k++) {
            if ((mask >> k) & 1) {
                if (solve(x, y + char(k + 'A')))
                    return dp[z] = true;
            }
        }

        return dp[z] = false;
    }
};
