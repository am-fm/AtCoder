#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int a, cnt = 0;
  bool swapped;
  rep(i, n){
    cin >> a;

    swapped = true;
    while(swapped){
      swapped = false;
      if(a % 2 == 0){
        a--;
        cnt++;
        swapped = true;
      }
      if(a % 3 == 2){
        a--;
        cnt++;
        swapped = true;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
