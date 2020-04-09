
 #Definition for singly-linked list.
class ListNode:
  
  def __init__(self, x):

    self.val = x
    self.next = None

class Solution:

  def middleNode(self, head: ListNode) -> ListNode:
    
    fast_pointer = head
    slow_pointer = head

    while ((fast_pointer != None) and (fast_pointer.next != None)):
      
      fast_pointer = fast_pointer.next.next
      slow_pointer = slow_pointer.next

    return slow_pointer
