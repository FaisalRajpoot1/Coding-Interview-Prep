class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l =0;
        int r =1;
        int n = nums.size();
        for (int i =0; i<n; i++){
            if(nums[l] == nums[r]){
                continue;
                l++;
                r++;
            }
            else{
               return nums[i];
            }
        }
        return 0;
    }
};
