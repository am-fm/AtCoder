#include <iostream>
#include <string>
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;

  string ans;
  if(a.size() > b.size()){
    ans = a;
  }else{
    ans = b;
  }

  cout << ans << endl;
  return 0;
}
