class Solution {
  public:
    int count( vector<int>& arr,int T) {
               int n=arr.size();
        if(n==0)
        return T==0?1:0;

        vector<unsigned long long> prev(T + 1, 0);  
    for (int i = 0; i <= T; i++) {
        if (arr[0]!=0 && i % arr[0] == 0||arr[0]==0 && i==0)
            prev[i] = 1;
          
    }

    for (int ind = 1; ind < n; ind++) {
        vector<unsigned long long> cur(T + 1, 0); 
        for (int target = 0; target <= T; target++) {
            unsigned long long notTaken = prev[target];  
            unsigned long long taken = 0;
            if (arr[ind] <= target)
                taken = cur[target - arr[ind]];  
            cur[target] = notTaken + taken;  
        }
        prev = cur;  
    }

    return prev[T];
    }
};