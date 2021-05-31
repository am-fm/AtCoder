#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> d(N + 1);
  for(int i = 0; i < N; i++){
    cin >> d.at(i);
  }

  sort(d.begin(), d.end());

  int index = N / 2;

  cout << d.at(index + 1) - d.at(index) << endl;

  return 0;
}
