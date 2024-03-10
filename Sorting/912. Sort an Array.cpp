class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int num : nums) {
            map[num]++;
        }

        int minElement = *min_element(nums.begin(), nums.end());
        int maxElement = *max_element(nums.begin(), nums.end());

        vector<int> result;
        for (int num = minElement; num <= maxElement; num++) {
            if (map.count(num)) {
                result.insert(result.end(), map[num], num);
            }
        }

        return result;
    }
};




