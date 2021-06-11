#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int a, sum = 0, num = 0;
  rep(i, n){
    cin >> a;
    if(a > 0){
      sum += a;
      num++;
    }
  }

  int ans;
  if(sum % num){
    ans = sum / num + 1;
  }else{
    ans = sum / num;
  }

  cout << ans << endl;
  return 0;
}
