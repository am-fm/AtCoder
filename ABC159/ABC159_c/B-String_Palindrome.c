#include <stdio.h>
#include <string.h>

int main(){
  int N, i, j;
  char S[100];

  /* 入力 */
  scanf("%s", &S);

  /* 計算と出力 */
  N = strlen(S);

  for(i = 0; i < N; i++){
    if(S[i] != S[N - i - 1]){
      printf("No");
      return 0;
    }
  }

  for(i = 0; i < (N - 1) / 2 - 1; i++){
    if(S[i] != S[(N - 1) / 2 - i - 1]){
      printf("No");
      return 0;
    }
  }

  printf("Yes\n");

  return 0;
}
