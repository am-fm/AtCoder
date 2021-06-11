#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int ans;
  if(a % b == 0){
    ans = 0;
  }else{
    ans = b - a % b;
  }

  cout << ans << endl;
  return 0;
}
