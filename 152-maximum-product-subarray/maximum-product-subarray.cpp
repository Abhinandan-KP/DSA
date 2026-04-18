class Solution {
public:
    int maxProduct(vector<int>& arr) {
       int n=arr.size();
       int res=arr[0],maxprod=arr[0],minprod=arr[0],curr=0;
       for(int i=1;i<n;i++)
       {
             curr=arr[i];
             if(curr<0)
             swap(maxprod,minprod);
            
            maxprod=max(curr*maxprod,curr);
            minprod=min(curr*minprod,curr);

            res=max(res,maxprod);
       }
       return res;
    }
};