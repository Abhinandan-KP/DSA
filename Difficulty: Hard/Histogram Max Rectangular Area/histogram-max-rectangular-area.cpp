class Solution {
  public:
    vector<int> nextSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n, n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(!st.empty()) nse[i] = st.top();
            st.push(i);
        }

        return nse;
    }

    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n, -1);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if(!st.empty()) pse[i] = st.top();
            st.push(i);
        }

        return pse;
    }

    int getMaxArea(vector<int> &arr) {
        int n = arr.size();

        vector<int> nse = nextSmaller(arr);
        vector<int> pse = prevSmaller(arr);

        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int width = nse[i] - pse[i] - 1;
            int area = arr[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};