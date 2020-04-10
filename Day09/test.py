S = "y#fo##f"
T = "y#f#o##f"

sx1 = []
sx2 = []    

for char in S:
  if char == '#':
    if len(sx1) >= 1 :
      sx1.pop()
  else:
    sx1.append(char)

for char in T:
  if char == '#':
    if len(sx2) >= 1 :
      sx2.pop()
  else:
    sx2.append(char)

print(sx1)
print(sx2)