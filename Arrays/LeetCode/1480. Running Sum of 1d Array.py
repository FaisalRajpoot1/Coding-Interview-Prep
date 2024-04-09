class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        length = len(nums)
        total_sum = 0
        result = [0] * length
        for i in range(length):
            total_sum =  total_sum + nums[i]
            result[i] = total_sum
        return result
