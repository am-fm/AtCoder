#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  int n;
  cin >> n;

  int first = 0, second = 0, a;
  rep(i, n){
    cin >> a;
    if(second < a){
      if(first < a){
        second = first;
        first = a;
      }else if(first > a){
        second = a;
      }
    }
  }

  cout << second << endl;
  return 0;
}
