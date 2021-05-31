#include <stdio.h>

int main(){
  int H, W, i, j, h[101], w[101], num1 = 0, num2 = 0;
  char a[101][101];

  scanf("%d %d", &H, &W);

  for(i = 0; i < H; i++){
    h[i] = 0;
  }
  for(i = 0; i < W; i++){
    w[i] = 0;
  }

  for(i = 0; i < H; i++){
    scanf("%s", a[i]);
    for(j = 0; j < W; j++){
      if(a[i][j] != '.'){
        break;
      }
    }
    if(j == W){
      h[i] = 1;
    }
  }

  for(i = 0; i < W; i++){
    for(j = 0; j < H; j++){
      if(a[j][i] != '.'){
        break;
      }
    }
    if(j == H){
      w[i] = 1;
    }
  }

  for(i = 0; i < H; i++){
    if(h[i] == 0){
      for(j = 0; j < W; j++){
        if(w[j] == 0){
          printf("%c", a[i][j]);
        }
      }
      printf("\n");
    }
  }

  return 0;
}
