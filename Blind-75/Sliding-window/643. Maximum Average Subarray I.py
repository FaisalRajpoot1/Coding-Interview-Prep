class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        total_sum = sum(nums[:k])
        max_sum = total_sum
        
        for right in range(k, len(nums)):
            total_sum += nums[right] - nums[right - k]
            max_sum = max(max_sum, total_sum)
        return max_sum / k
