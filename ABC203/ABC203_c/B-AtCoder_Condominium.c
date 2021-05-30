#include <stdio.h>

int main(){
  int N, K, sum = 0, i, j;

  scanf("%d %d", &N, &K);

  for(i = 1; i < N + 1; i++){
    for(j = 1; j < K + 1; j++){
      sum += i * 100 + j;
    }
  }

  printf("%d\n", sum);
  return 0;
}
