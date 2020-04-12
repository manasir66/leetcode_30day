#try to get height of a binary tree
#it is height of the node 
#height of a node = number of edges to a leaf node
#recursively you can find height of any node

class TreeNode:

  def __init__(self, x):
    self.val = x
    self.left = None
    self.right = None




class Solution:

  def diameterOfBinaryTree(self, root: TreeNode) -> int:

    if root == None:
      return 0

    

    left_height = self.height_of_tree(root.left)
    right_height = self.height_of_tree(root.right)

    left_zone = self.diameterOfBinaryTree(root.left)
    right_zone = self.diameterOfBinaryTree(root.right)

    return max((left_height+right_height), max(left_zone, right_zone))
  

  def height_of_tree(self, root):
    
    if root == None:
      return 0
    
    else:
      return 1 + max(self.height_of_tree(root.left), self.height_of_tree(root.right))