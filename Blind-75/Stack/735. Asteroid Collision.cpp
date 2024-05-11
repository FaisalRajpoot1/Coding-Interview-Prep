class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int x: asteroids){
            bool survive=1;
            if(x>0) st.push_back(x);
            else{ //x<0
                while(!st.empty()){
                    int y=st.back();
                    if (y<0) break;
                    else if (x+y==0) {
                        survive=0;
                        st.pop_back();
                        break;
                    }
                    else if (x+y<0){
                        st.pop_back();
                    }
                    else{
                        survive=0;
                        break;
                    } 
                }
                if (survive) 
                    st.push_back(x);
            }
        }
        return st;
    }
};
