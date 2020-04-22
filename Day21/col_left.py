# """
# This is BinaryMatrix's API interface.
# You should not implement it, or speculate about its implementation
# """
class BinaryMatrix(object):

  def get(self, x: int, y: int) -> int:
    
    return 0

  def dimensions(self):
   
    x =1
    y =1
    return x, y



class Solution:

  def leftMostColumnWithOne(self, binaryMatrix: 'BinaryMatrix') -> int:
    
    row, col = binaryMatrix.dimensions()

    curr_row = 0
    curr_col = col - 1

    while curr_row < row and curr_col >= 0:
      if binaryMatrix.get(curr_row, curr_col) == 1:
        curr_col += -1
      else:
        curr_row += 1
    
    if curr_col != col -1:
      return curr_col +1 
    else:
      return -1

        