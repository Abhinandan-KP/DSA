class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for(int ast:asteroids)
        { bool destroy=false;
            while(!st.empty() && st.back()>0 && ast<0)
            {  
                if(st.back()<abs(ast))
                {
                     st.pop_back();
                     continue;
                }
                else if(st.back()==abs(ast))
                {
                      st.pop_back();
                       destroy=true;
                      break;
                }
                else
                {
                    destroy=true;
                    break;
                }
            }
            if(!destroy)
            {
                 st.push_back(ast);
            }
        }
        return st;
    }
};