class TreeNode:

  def __init__(self, data):
    self.val = data
    self.left = None
    self.right = None


      #the problem is to create the BST if the pre order traversal is given 
      #pre order takes : ROOT LEFT RIGHT 
      #the first element in pre order is the root
      #the look for the next element that is greater than root
      #all elements from index 1 to index of the next greater element are in left sub tree
      #the rest are in right sub tree
      #if we repaet this process recursivley we can build the binary search tree

class Solution:
    def bstFromPreorder(self, preorder) -> TreeNode:

      #if an empty list is passed we return 0
      if preorder == []:
        return None
      

      #the 1st elem in the pre order search is the root
      #so we initialize root as peorder[0]
      root = TreeNode(preorder[0])  

      index = 1 # since we have used zero to initialize the root

      #increment the index till the end of the list while making sure you reach the index before the
      #element greater than the root
      while( (index < len(preorder)) and preorder[index] < root.val ):
        index += 1

      #once the index has been found we can recursively run this to build the tree

      root.left = self.bstFromPreorder(preorder[1:index]) 
      #build the left while passing the list from one to the index 

      #build the right while passing the list from index to end
      root.right = self.bstFromPreorder(preorder[index:])
      
      return root