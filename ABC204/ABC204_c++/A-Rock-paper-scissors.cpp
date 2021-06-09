#include <iostream>
using namespace std;

int main(){
  int x, y, ans;
  cin >> x >> y;

  if(x == y){
    ans = x;
  }else{
    if(x == 0 && y == 1 || x == 1 && y == 0){
      ans = 2;
    }else if(x == 1 && y == 2 || x == 2 && y == 1){
      ans = 0;
    }else if(x == 0 && y == 2 || x == 2 && y == 0){
      ans = 1;
    }
  }

  cout << ans << endl;
  return 0;
}
