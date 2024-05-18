class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = {}
        n = len(nums)
        for num in nums:
            if num not in count:
                count[num] = 0
            count[num] += 1
            if count[num] > n // 2:
                return num
