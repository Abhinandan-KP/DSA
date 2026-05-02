class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        int n = start.size();

        vector<pair<int,int>> arr;
        for(int i = 0; i < n; i++) {
            arr.push_back({finish[i], start[i]});
        }

        sort(arr.begin(), arr.end());

        int count = 1;
        int lastFinish = arr[0].first;

        for(int i = 1; i < n; i++) {
            if(arr[i].second > lastFinish) {
                count++;
                lastFinish = arr[i].first;
            }
        }

        return count;
    }
};