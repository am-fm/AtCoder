#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;

  s.at(0) = toupper(s.at(0));
  if(s.size() > 1){
  	transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
  }

  cout << s << endl;
  return 0;
}
