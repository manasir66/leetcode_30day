class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:

      s_list = []
      for char in s:
        s_list.append(char)

      temp = 0
      for direction, amount in shift:

        if direction == 1:
          for i in range(amount):
            temp = s_list.pop(-1)
            s_list.insert(0,temp)
          
        
        else:
          for i in range(amount):  
            temp = s_list.pop(0)
            s_list.append(temp)
          


      ans = "".join(s_list)
      return ans

      