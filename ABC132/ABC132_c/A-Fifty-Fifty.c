#include <stdio.h>

int main(){
  char S[5];
  int cnt = 0, i, j;

  scanf("%s", S);

  for(i = 0; i < 3; i++){
    for(j = i + 1; j < 4; j++){
      if(S[i] == S[j]){
        cnt++;
      }
    }
  }

  if(cnt == 2){
    printf("Yes\n");
  }else{
    printf("No\n");
  }

  return 0;
}
