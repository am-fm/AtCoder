#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int ans;
  if(a == b){
    ans = 0;
  }else if(a < b){
    ans = min(b - a, a + 10 - b);
  }else{
    ans = min(a - b, b + 10 - a);
  }

  cout << ans << endl;
  return 0;
}
