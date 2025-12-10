from typing import List

def minimumAverage(self, nums: List[int]) -> float:
    nums.sort()
    l,r = 0, len(nums) - 1
    averages = []

    while l < r:
        averages.append((nums[l] + nums[r]) / 2)
        l += 1
        r -= 1
    averages.sort()
    return averages[0]
