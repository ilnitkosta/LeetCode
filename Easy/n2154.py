from typing import List

def findFinalValue(self, nums: List[int], original: int) -> int:

        while original in nums:
            original *= 2
        
        return original