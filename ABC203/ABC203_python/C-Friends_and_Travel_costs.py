N, shojikin = map(int, input().split())

lst = []

for i in range(N):
  A, B = map(int, input().split())

  lst.append([A, B])

lst.sort(key=lambda x: x[0]) # 村を昇順にsort

now_village = 0
pre_village = 0

for next_village, coin in lst:
  if next_village - now_village > shojikin: # もし行けなかったら
    now_village += shojikin                 # 所持金で行けるところまで行く
    print(now_village)
    exit()

  shojikin -= next_village - now_village # 移動費
  shojikin += coin                       # お金を受け取る
  now_village = next_village             # 現在地を更新

now_village += shojikin # 友達訪問が終わったら行けるところまで行く
print(now_village)
