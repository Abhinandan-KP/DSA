class Solution {
  public:
    int value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000;
    }

    int romanToDecimal(string &s) {
        int n = s.size();
        int result = 0;

        for(int i = 0; i < n; i++) {
            if(i + 1 < n && value(s[i]) < value(s[i + 1])) {
                result -= value(s[i]);
            } else {
                result += value(s[i]);
            }
        }

        return result;
    }
};