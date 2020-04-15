#shift= [[1,1],[1,1],[0,2],[1,3]]

#for direction, amount in shift:
  #print("Direction : ", direction, end= " | ")
  #print("Amount    : ", amount)
  
#s = "thisisalongstring"
#s_list = []
#for c in s:
#  s_list.append(c)

#print("".join(s_list))

s = "abc" 
shift = [[0,1],[1,2]]
s_list = []
for char in s:
  s_list.append(char)
print(s_list)
temp = 0
for direction, amount in shift:
  print("1st pass ", direction, " ", amount)
  if direction == 1:

    temp = s_list.pop(-1)
    print(s_list)
    if amount == 1:
      s_list.insert(0, temp)
    else:
      s_list.insert(amount-1,temp)
  
  else:

    temp = s_list.pop(0)
    print(s_list)
    if amount == 1:
      s_list.append(temp)
    else:
      s_list.insert(-amount+1,temp)

  print(s_list)

ans = "".join(s_list)
print(ans)