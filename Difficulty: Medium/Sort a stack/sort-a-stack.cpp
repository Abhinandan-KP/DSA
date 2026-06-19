class Solution {
  public:
    void sortStack(stack<int>&s,int temp)
    {
     if(s.empty()||s.top()<=temp)
     {
         s.push(temp);
         return;
     }
     int val=s.top();
     s.pop();
    sortStack(s,temp);
    s.push(val);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(!st.empty())
        {
            int temp=st.top();
            st.pop();
            sortStack(st);
            sortStack(st,temp);
        }
    }
};
