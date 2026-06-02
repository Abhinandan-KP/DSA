class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int level=0;
        for(char ch:s)
        {
            if(ch=='(')
            { 
                if(level>0)
                result+='(';
                level++;
            }
            else
            {
                level--;
                if(level>0)
                result+=')';

            }
        }
        return result;
    }
};