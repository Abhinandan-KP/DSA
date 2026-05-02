class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {
        bool neg = false;
        if(s1[0] == '-') {
            neg = !neg;
            s1 = s1.substr(1);
        }
        if(s2[0] == '-') {
            neg = !neg;
            s2 = s2.substr(1);
        }

        int n = s1.size(), m = s2.size();
        vector<int> res(n + m, 0);
        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + res[i + j + 1];

                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        string ans = "";
        for(int x : res) {
            if(!(ans.empty() && x == 0)) {
                ans.push_back(x + '0');
            }
        }

        if(ans.empty()) ans = "0";
        if(neg && ans != "0") ans = "-" + ans;

        return ans;
    }
};