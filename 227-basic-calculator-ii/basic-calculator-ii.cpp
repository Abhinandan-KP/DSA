class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long currentNumber = 0;
        char operation = '+';
        int n = s.length();

for (int i = 0; i < n; i++) {
char ch = s[i];
            
    if (isdigit(ch)) {
    currentNumber = currentNumber * 10 + (ch - '0');
    }
    if ((!isdigit(ch) && !isspace(ch)) || i == n - 1) {
     if (operation == '+') {
        st.push(currentNumber);
                } 
    else if (operation == '-') {
            st.push(-currentNumber);
                }
     else if (operation == '*') {
        int topVal = st.top();
              st.pop();
                    st.push(topVal * currentNumber);
                } 
    else if (operation == '/') {
        int topVal = st.top();
      st.pop();
     st.push(topVal / currentNumber);
                }
      operation = ch;
   currentNumber = 0;
            }
        }        
        int result = 0;
        while (!st.empty()) {
        result += st.top();
            st.pop();
        }    
        return result;
    }
};