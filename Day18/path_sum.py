class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        
        if len(grid) == 0 or len(grid[0]) == 0:
          return 0
        
        
