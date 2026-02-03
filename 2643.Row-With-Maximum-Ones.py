from typing import List
class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        return list(max(enumerate(i.count(1) for i in mat), key=lambda x: x[1]))
    

#example
sol = Solution()
print(sol.rowAndMaximumOnes([[0,0,1],[0,1,1],[1,1,1]]))