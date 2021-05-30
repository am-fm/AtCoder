N, K = map(int, input().split())
sum = 0

for hundreds in range(N):
  hundreds += 1

  for ones in range(K):
    ones += 1

    room_number = hundreds * 100 + ones

    sum += room_number

print(sum)
