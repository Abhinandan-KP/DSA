class Solution {
public:
    static bool fun(pair<char,int> p1, pair<char,int> p2)
    {
        if(p1.second > p2.second) return true;
        if(p1.second < p2.second) return false;

        return p1.first > p2.first;
    }

    string frequencySort(string s) {
        pair<char,int> freq[128];

        for(int i=0;i<128;i++)
        {
            freq[i] = {(char)i, 0};
        }

        for(char c : s)
        {
            freq[(int)c].second++;
        }

        sort(freq, freq+128, fun);

        string ans;

        for(int i=0;i<128;i++)
        {
            while(freq[i].second--)
            {
                ans += freq[i].first;
            }
        }

        return ans;   
    }
};