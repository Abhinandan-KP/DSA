class Solution {
  public:
 
int merge(vector<int>&arr,int st,int mid,int en)
{
     vector<int>temp;
     int i=st,j=mid+1;
     int cnt=0;
     while(i<=mid && j<=en)
     {
         if(arr[i]<=arr[j])
         {
             temp.push_back(arr[i]);
             i++;
         }
         else
         {
             temp.push_back(arr[j]);
             cnt += (mid - i + 1); 
             j++;
         }
     }
     while(i<=mid)
     {
         temp.push_back(arr[i]);
         i++;
     }
     while(j<=en)
     {
         temp.push_back(arr[j]);
         j++;
     }
     for(int i=0;i<temp.size();i++)
     {
         arr[i+st]=temp[i];
     }
     return cnt;
}
int mergesort(vector<int>&arr,int st,int en)
{int cnt=0;
     if(st<en)
    {
        int mid=st+(en-st)/2;
        
        cnt+=mergesort(arr,st,mid);
        cnt+=mergesort(arr,mid+1,en);
        cnt+=merge(arr,st,mid,en);
    }
    return cnt;
}
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n=arr.size();
         return mergesort(arr,0,n-1);
    }
};