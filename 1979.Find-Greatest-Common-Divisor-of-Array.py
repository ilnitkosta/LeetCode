from typing import List
import math 

class Solution:
    def findGCD(self, nums: List[int]) -> int:
        min_ , max_ = nums[0], nums[0]
        for i in nums:
            min_ = min(min_, i)
            max_ = max(max_, i)
        
        return math.gcd(min_, max_)