#i know I didn't follow the follow-up rules, but I did my best.
from typing import List

def sortColors(self, nums: List[int]) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    n = len(nums)
    steps = 0 #i created this, to check will be the code more optimized
    for i in range(n):
        for j in range(0, n - i - 1): # if i'll remove 'i', the code will be slower
            steps += 1
            if nums[j] > nums[j + 1]:
                nums[j], nums[j + 1] = nums[j + 1], nums[j]
    print("Steps: ", steps)

#example usage
arr = [8, 5, 1, 6, 3]
sortColors(None, arr) 
print(arr)  
#Output: 'Steps: 10', if i'll remove 'i' from the inner loop, the output wil be 'Steps: 20'    
#Output: [1,3,5,6,8]