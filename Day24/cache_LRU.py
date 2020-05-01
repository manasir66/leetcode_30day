class Dll: #dll = doubly linked list

  def __init__(self, key, val):
    self.key = key 
    self.val = val
    self.next_n = None
    self.prev_n = None  

class LRUCache:

  

  def __init__(self, capacity: int):

    self.head = Dll(-1, -1)
    self.tail = self.head
    self.capacity = capacity
    self.cache_key_map = {}
    self.size = 0
      

  def get(self, key: int) -> int:
    if key not in self.cache_key_map:
      return -1
    else:
      node = self.cache_key_map[key]
      val = node.val
      while node.next_n:
        node.prev_n.next_n = node.next_n
        node.next_n.prev_n = node.prev_n
        self.tail.next_n = node
        node.prev_n = self.tail
        node.next_n = None
        self.tail = node

      return val

  def put(self, key: int, value: int) -> None:
    if key in self.cache_key_map:
      node = self.cache_key_map[key]
      nde.val = value
      while node.next_n:
        node.prev_n.next_n = node.next_n
        node.next_n.prev_n = node.prev_n
        self.tail.next_n = node
        node.prev_n = self.tail
        node.next_n = None
        self.tail = node
    else:
      node = Dll(key, value)
      self.cache_key_map[key] = node
      self.tail.next_n = node
      node.prev_n = self.tail
      self.tail = node
      self.size += 1
      if self.size > self.capacity:
        rem = self.head.next_n
        self.head.next_n = self.head.next_n.next_n
        self.head.next_n.prev_n = self.head
        del self.cache_key_map[rem.key]
        self.size += -1

      
  