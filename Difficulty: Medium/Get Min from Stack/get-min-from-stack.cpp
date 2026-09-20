class SpecialStack {
    private:
    stack<int>st;
    stack<int>minst;
  public:
  
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        st.push(x);
        if(minst.empty() || x<=minst.top())
        {
            minst.push(x);
        }
        
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty())
        {
            return;
        }
        if(minst.top()==st.top())
        {
            minst.pop();
        }
        st.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty())
          {
              return -1;
          }
        return st.top();
    }

    bool isEmpty() {
        // Check if stack is empty
       
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
         if(st.empty())
        {
            return -1;
        }
        return minst.top();
    }
};