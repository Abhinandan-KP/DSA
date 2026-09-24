class Solution {
public:
    void wiggleSort(vector<int>& arr) {
      sort(arr.begin(),arr.end());
      int n=arr.size();
      vector<int>dup1,dup2;
       int mid=(n+1)/2;
       for(int i=mid-1;i>=0;i--)
       {
             dup1.push_back(arr[i]);
       }
       for(int i=n-1;i>=mid;i--)
       {
            dup2.push_back(arr[i]);
       }
       int j=0;
       for(int i=0;i<n;i+=2)
       {
             arr[i]=dup1[j];
             if(i+1<n)
             {
                  arr[i+1]=dup2[j];
             }
             j++;
       }
    }
};