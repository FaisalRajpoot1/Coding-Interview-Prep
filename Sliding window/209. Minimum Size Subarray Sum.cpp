class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        minimum = float("inf")
        l = total =0
        for r in range(len(nums)):
            total+=nums[r]
            while total >=target:
                minimum = min(minimum,r-l+1)
                total -=nums[l]
                l+=1
        return minimum if minimum != float("inf") else 0
