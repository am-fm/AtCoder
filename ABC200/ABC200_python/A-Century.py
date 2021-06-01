n = int(input())

n_one = n % 100
s = n // 100

if n_one:
  s += 1

print(s)
