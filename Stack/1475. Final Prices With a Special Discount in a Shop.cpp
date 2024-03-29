class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(0);
        for(int i =n-1; i>=0 ; i--){
            int current = prices[i];
            while(current < st.top()){
             st.pop();
            }
            ans[i] = current - st.top();
            st.push(current);
        }
        return ans;
    }
};
