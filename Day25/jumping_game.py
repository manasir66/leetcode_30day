
class Solution:
    def canJump(self, nums: List[int]) -> bool:

      x = len(nums) - 1

      for i in reversed(range(x)):
        if (i + nums[i] >= x):
          x = i
      
      return x == 0