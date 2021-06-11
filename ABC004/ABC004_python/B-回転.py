c = []

for i in range(4):
  c.append(list(input()))
  c[i].reverse()

c.reverse()

for i in range(4):
  l = ''.join(c[i])
  print(l)
