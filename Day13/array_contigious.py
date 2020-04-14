class Solution:
    def findMaxLength(self, nums: List[int]) -> int:

        sum = 0
        hash_map = {}
        max_ans = 0

        for index in range(len(nums)):
          if nums[index] == 0:
            sum += -1
          else:
            sum += 1
          if sum == 0:
            max_ans = index +1
          
          if sum in hash_map:
            max_ans = max(max_ans, index - hash_map[sum])

          else:
            hash_map[sum] = index
            
        return max_ans