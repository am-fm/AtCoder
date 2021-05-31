#include <stdio.h>

int main(){
  int n, p[21], h, i, j, ans = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &p[i]);
  }

  for(i = 1; i < n - 1; i++){
    h = i - 1;
    i = i;
    j = i + 1;
    if(p[h] < p[i]){
      if(p[i] < p[j]){
        ans++;
      }
    }else{
      if(p[j] < p[i]){
        ans++;
      }
    }
  }

  printf("%d\n", ans);

  return 0;
}
