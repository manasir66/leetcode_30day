
class Solution:
  def backspaceCompare(self, S: str, T: str) -> bool:

    sx1 = []
    sx2 = []    

    for char in S:
      if char == '#' and len(sx1) >= 1 :
        sx1.pop()
      else:
        sx1.append(char)

    for char in T:
      if char == '#' and len(sx2) >= 1 :
        sx2.pop()
      else:
        sx2.append(char)

    return (sx1 == sx2)

