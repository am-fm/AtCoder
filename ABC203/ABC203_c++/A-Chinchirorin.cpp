#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  int ans;

  if(a == b){
    ans = c;
  }else if(b == c){
    ans = a;
  }else if(c == a){
    ans = b;
  }else{
    ans = 0;
  }

  cout << ans << endl;

  return 0;
}
