#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int min_t = 100, t;
  rep(i, n){
    cin >> t;
    min_t = min(min_t, t);
  }

  cout << min_t << endl;
  return 0;
}
