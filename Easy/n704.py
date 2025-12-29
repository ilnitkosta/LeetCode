from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
    
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                left = mid + 1 
            else:
                right = mid - 1
    
        return -1 

# example test cases 
sol = Solution()
print(sol.search([-1,0,3,5,9,12], 9)) # output: 4
print(sol.search([-1,0,3,5,9,12], 2)) # output: -1