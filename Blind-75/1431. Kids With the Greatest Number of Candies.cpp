class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res(n);

        for(int i=0; i<n; i++){
            int val = candies[i] + extraCandies;
            bool flag = true;
            for(int j=0; j<n; j++){
                if(val < candies[j]){
                    flag = false;
                    break;
                }
            }
            res[i] = flag;
        }
        return res;
    }
};
