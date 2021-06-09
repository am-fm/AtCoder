#include <iostream>
using namespace std;

int main(){
  int n, a, ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a;
    if(a > 10){
      a -= 10;
      ans += a;
    }
  }

  cout << ans << endl;
  return 0;
}
