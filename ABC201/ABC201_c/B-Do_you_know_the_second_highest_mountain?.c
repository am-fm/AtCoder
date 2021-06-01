#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int N, T, i, tmp1 = 0, tmp2 = 0;
  char S[16], tmpA[16], tmpB[16];

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%s %d", S, &T);
    if(tmp1 < T){
      tmp2 = tmp1;
      tmp1 = T;
      strcpy(tmpB, tmpA);
      strcpy(tmpA, S);
    }else if(tmp2 < T){
      tmp2 = T;
      strcpy(tmpB, S);
    }
  }

  printf("%s\n", tmpB);
  return 0;
}
