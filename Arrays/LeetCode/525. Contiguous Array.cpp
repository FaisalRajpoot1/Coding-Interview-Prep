class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> countMap;
        int maxLen = 0, count = 0;
        
        countMap[0] = -1; 
        
        for (int i = 0; i < n; i++) {
            count += (nums[i] == 0) ? -1 : 1;
            
            if (countMap.count(count)) {
                maxLen = max(maxLen, i - countMap[count]);
            } else {
                countMap[count] = i;
            }
        }
        
        return maxLen;
    }
};
