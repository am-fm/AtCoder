#include <stdio.h>

int main(){
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  // 出た目(a, b, c)の反対の和を出力
  printf("%d\n", (7 - a) + (7 - b) + (7 - c));

  return 0;
}
