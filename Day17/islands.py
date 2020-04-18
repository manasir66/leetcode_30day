#solution from an online tutorial explaining the graph probelm

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        count_val = 0
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == '1':
                    self.search_d(grid, i, j)
                    count_val += 1
        return count_val
    
    def search_d(self, grid, i, j):
        if i<0 or j<0 or i>= len(grid) or j>= len(grid[0]) or grid[i][j] != '1':
            return 
        grid[i][j] = '0'
        self.search_d(grid, i+1, j)
        self.search_d(grid, i-1, j)
        self.search_d(grid, i, j+1)
        self.search_d(grid, i, j-1)
