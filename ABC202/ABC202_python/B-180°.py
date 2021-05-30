s = input()

lst = [int(c) for c in s]

# 0, 1, 8を一気に反転させる
lst.reverse()

# 9と6は反転させて出力
for i in lst:
  if i == 9:
    print(6, end = '')
  elif i == 6:
    print(9, end = '')
  else:
    print(i, end = '')

print()
