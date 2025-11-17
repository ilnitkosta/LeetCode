from typing import List 

def countSubarrays(self, nums: List[int]) -> int:
    res = 0
    n = len(nums)

    for i in range(n-2):
        f = nums[i]
        s = nums[i + 1]
        t = nums[i + 2]

        if (f + t) * 2 == s:
            res += 1

        return res