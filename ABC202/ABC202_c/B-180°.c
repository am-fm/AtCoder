#include <stdio.h>
#include <string.h>

int main(){
  char S[100001] = {0};
  int len, i;

  scanf("%s", S);

  len = strlen(S);

  // 後ろから回していき、6と9は入れ替えて出力
  for(i = len - 1; i >= 0; i--){
    if(S[i] == '6'){
      printf("%d", 9);
    }else if(S[i] == '9'){
      printf("%d", 6);
    }else{
      printf("%c", S[i]);
    }
  }

  printf("\n");
  return 0;
}
