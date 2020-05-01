class Dll: #doubly linked list 

  def __init__(self, key, val):
    self.key = key
    self.val = val
    self.next = next
    self.prev = prev 

class FirstUnique:

  def __init__(self, nums: List[int]):

    self.hashmap = {}
    self.queue = []
    for i in nums:
      self.add(i)

      

  def showFirstUnique(self) -> int:
    while len(self.queue) > 0 and self.hashmap[self.queue[0]] >1:
      self.queue.pop(0)
    
    if len(self.queue) == 0:
      return -1
    else:
      return self.queue[0]

  def add(self, value) -> None:

    if value in self.hashmap:
      self.hashmap[value] += 1
    else:
      self.hashmap[value] = 1
      self.queue.append(value)
        


# Your FirstUnique object will be instantiated and called as such:
# obj = FirstUnique(nums)
# param_1 = obj.showFirstUnique()
# obj.add(value)