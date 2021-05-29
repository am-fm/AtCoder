 # サイコロで出た目a, b, cをリストで受け取る
lst = list(map(int, input().split()))

 # 目と反対の面の目の和×3
sum = 21

 # 合計値から出た目を引いていく
for i in lst:
  sum -= i

 # 反対の面の表す整数の和を出力
print(sum)
