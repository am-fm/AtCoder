#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep_reverse(j, m) for(int j = (int)(m) - 1; j >= 0; j--)

int main(){
  vector<vector<char> > c(4, vector<char>(4, '.'));
  rep(i, 4){
    rep(j, 4){
      cin >> c.at(i).at(j);
    }
  }

  rep_reverse(i, 4){
    rep_reverse(j, 4){
      cout << c.at(i).at(j) << ' ';
    }
    cout << endl;
  }
  return 0;
}
