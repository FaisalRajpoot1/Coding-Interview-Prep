class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        length = len(nums)
        result = [0] * length
        for i in range (length):
            newarr = nums[i]
            ans = nums[newarr]
            result[i] = ans
        return result
