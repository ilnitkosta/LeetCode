from typing import List
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l,r = 0,len(numbers)-1

        while(l<r):
            x=numbers[l]+numbers[r]
            if x==target: return [l+1,r+1]
            elif x<target: l+=1
            else: r-=1

        return []
    
# example test case
s = Solution()
print(s.twoSum([2,7,11,15],9)) # [1,2]
