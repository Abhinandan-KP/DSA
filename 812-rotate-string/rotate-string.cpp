class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return  false;
        for(int i=0;i<s.length();i++)
        {
            string rotation=s.substr(i)+s.substr(0,i);
            if(rotation==goal) return true;
        }
        return false;
    }
};