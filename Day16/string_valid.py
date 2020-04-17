class Solution:
  def checkValidString(self, s: str) -> bool:

    bracket_stack = []
    asterix_stack = []
    if len(s) == 0 or s == '*':
      return True
    if s[0] == ')':
      return False

    else:
      for i in range(len(s)):

        if s[i] == '(':
          bracket_stack.append(i)
        elif s[i] == ')':
          if len(bracket_stack) >0:
            bracket_stack.pop()
          elif len(asterix_stack) >0:
            asterix_stack.pop()
          else:
            return False
        else:
          asterix_stack.append(i)

    while bracket_stack and asterix_stack:
      if bracket_stack[-1] < asterix_stack[-1]:
        bracket_stack.pop()
        asterix_stack.pop()
      else:
        break

    return bracket_stack == []
      