class Solution:

  def lastStoneWeight(self, stones : List[int]) -> int:

    while (len(stones) >1):
      stones.sort()
      max1 = stones.pop()
      max2 = stones.pop()

      if max1 != max2:
        stones.append(max1 - max2)
    
    if len(stones) == 0:
      return 0
    else:
      return stones.pop()