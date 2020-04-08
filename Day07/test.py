

arr1 = [3,5,1,7,13,17, 2, 4, 3, 4, 3, 1, 17]

dic_val = {}

arr1.sort()

for val in arr1:
  if val not in dic_val:
    dic_val[val] = val
  else:
    pass

new_lis = []
for x in dic_val.values():
  new_lis.append(x)

print(new_lis)

count = 0



new_dc = {}
for x in arr1:
  new_dc[x] = True

print(new_dc)