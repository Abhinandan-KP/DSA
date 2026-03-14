class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;

        for(int x:arr)
        {
               freq[x]++;
                       }

             for(int x:arr)
                       {
                        if(freq[x]==1)
                        return x;
                       }
        return -1;
    }
};