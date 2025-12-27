class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {

        vector<long long> freeAt(n, 0);  
        vector<int> count(n, 0);         

        sort(meetings.begin(), meetings.end());

        for (auto &m : meetings) {
            int s = m[0], e = m[1];

            long long earliestTime = LLONG_MAX;
            int earliestRoom = 0;
            bool assigned = false;

            for (int i = 0; i < n; i++) {

                if (freeAt[i] <= s) {
                    freeAt[i] = e;
                    count[i]++;
                    assigned = true;
                    break;
                }

                if (freeAt[i] < earliestTime) {
                    earliestTime = freeAt[i];
                    earliestRoom = i;
                }
            }

            if (!assigned) {
                freeAt[earliestRoom] += (e - s);
                count[earliestRoom]++;
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (count[i] > count[ans]) {
                ans = i;
            }
        }
        return ans;
    }
};
