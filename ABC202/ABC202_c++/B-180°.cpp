#include <iostream>
#include <string>
using namespace std;

int main(){
  string S;
  cin >> S;

  for(int i = S.size() - 1; i >= 0; i--){
    if(S.at(i) == '6'){
      cout << 9;
    }else if(S.at(i) == '9'){
      cout << 6;
    }else{
      cout << S.at(i);
    }
  }
  cout << endl;
}
