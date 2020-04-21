

class TreeNode:

  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None

  def insertVal(self, data):
    if self.data: #check if root exists
      if data < self.data: #check to see if it goes left ot right
        if self.left is None:
          self.left = TreeNode(data)
        else:
          self.left.insertVal(data)
      
      else:
        if data > self.data:
          if self.right is None:
            self.right = TreeNode(data)
          else:
            self.right.insertVal(data)



class Solution:

  def bstFromPreorder(self, preorder : List[int]) -> TreeNode:

    tree = TreeNode(preorder[0])
    for i in range(len(preorder)):
      if i> 0:
        tree.insertVal(preorder[i])
    
    res 

    return tree