#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = N / 100;

  if(N % 100){
    ans += 1;
  }

  cout << ans << endl;
}
