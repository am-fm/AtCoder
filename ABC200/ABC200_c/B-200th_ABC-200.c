#include <stdio.h>

int main(){
  long long int N, K, i;

  scanf("%lld %lld", &N, &K);

  for(i = 0; i < K; i++){
    if(N % 200 == 0){
      N /= 200;
    }else{
      N *= 1000;
      N += 200;
    }
  }

  printf("%lld\n", N);

  return 0;
}
