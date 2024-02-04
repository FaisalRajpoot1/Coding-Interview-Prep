
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(firstOccurence(nums, target));
        result.push_back(lastOccurence(nums, target));
        return result;
    }


    int firstOccurence(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int position = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                position = mid;
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return position;
    }

    int lastOccurence(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int position = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                position = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return position;
    }
};

