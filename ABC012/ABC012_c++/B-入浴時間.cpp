#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int hour = n / (60 * 60);
  n = n % (60 * 60);

  int minute = n / 60;
  n = n % 60;

  int second = n;

  if(hour < 10){
    cout << 0;
  }
  cout << hour << ':';

  if(minute < 10){
    cout << 0;
  }
  cout << minute << ':';

  if(second < 10){
    cout << 0;
  }
  cout << second << endl;
  return 0;
}
