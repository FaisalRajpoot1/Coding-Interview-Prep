class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int s = pushed.size();
        int i =0 , j=0;
        while(i<s && j<s){
            st.push(pushed[i]);
            while(!st.empty() && j<s && st.top() == popped[j])
            {
            st.pop();
            j++;
            }
            i++;
        }
        return st.empty();
    }
};
