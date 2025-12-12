from typing import List

def numIslands(self, grid: List[List[str]]) -> int:
    ans = 0

    def helper(sr,sc):
        if sr < 0:
            return
        if sc < 0:
            return
        if sr >= len(grid):
            return
        if sc >= len(grid[0]):
            return 

        if grid[sr][sc] == '0':
            return 
            
        grid[sr][sc] = '0'

        helper(sr-1,sc)
        helper(sr+1,sc)
        helper(sr,sc-1)
        helper(sr,sc+1)

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == '1':
                ans += 1
                helper(i,j)
    return ans