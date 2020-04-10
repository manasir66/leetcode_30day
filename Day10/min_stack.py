class MinStack:

  def __init__(self):
    self.stack = []
    self.sub_stack = []
    self.size = 0

  def push(self, x:int) -> None:
    self.stack.append(x)
    if self.sub_stack != []:
      if x <= self.sub_stack[-1]:
        self.sub_stack.append(x)
    else:
      self.sub_stack.append(x)

  def pop(self) -> None:
    if self.stack[-1] == self.sub_stack[-1]:
      self.sub_stack.pop()
      return self.stack.pop()
    else:
      return self.stack.pop()

  def top(self) -> int:
    return self.stack[-1]
    

  def getMin(self) -> int:
    return self.sub_stack[-1]
