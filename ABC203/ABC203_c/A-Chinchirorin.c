#include <stdio.h>

int main(){
  int a, b, c, ans = 0;

  scanf("%d %d %d", &a, &b, &c);

  if(a == b){
    ans = c;
  }else if(b == c){
    ans = a;
  }else if(c == a){
    ans = b;
  }

  printf("%d\n", ans);
  return 0;
}
