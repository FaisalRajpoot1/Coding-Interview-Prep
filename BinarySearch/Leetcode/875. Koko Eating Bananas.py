class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)
        res = right

        while left <= right:
            mid = (left + right) >> 1
            total_hours = 0
            
            # Calculate total hours required to eat all bananas at current speed 'mid'
            for p in piles:
                total_hours += math.ceil(p / mid)
            
            # Determine if current eating speed 'mid' is valid
            if total_hours <= h:
                res = min(res, mid)
                right = mid - 1
            else:
                left = mid + 1

        return res
