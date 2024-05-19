class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pi = 0;
        int ni = 1;
        vector <int> res(n);
       for(int &num : nums)
        if(num >0){
            res[pi] = num;
            pi +=2;
        }
        else{
            res[ni] = num;
            ni +=2;
        }

        return res;
    }
};
