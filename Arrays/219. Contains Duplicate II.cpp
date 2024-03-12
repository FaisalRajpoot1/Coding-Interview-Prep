class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> value;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (r - l > k) {
                value.erase(nums[l]);
                l++;
            }
            if (value.count(nums[r])) {
                return true;
            }
            value.insert(nums[r]);
        }
        return false;
    }
};
