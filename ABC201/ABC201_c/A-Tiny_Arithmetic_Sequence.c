#include <stdio.h>
#include <stdlib.h>

int main(){
  int a1, a2, a3;

  scanf("%d %d %d", &a1, &a2, &a3);

  if((a1 - a2 == a2 - a3) || (a1 - a3 == a3 - a2) || (a2 - a1 == a1 - a3) || (a2 - a3 == a3 - a1) || (a3 - a1 == a1 - a2) || (a3 - a2 == a2 - a1)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}
