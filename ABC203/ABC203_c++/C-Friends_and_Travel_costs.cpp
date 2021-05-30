#include <iostream>
#include <map>
using namespace std;

int main(){
  long long int N, K;
  cin >> N >> K;

  map<long long int, long long int> AB;

  long long int A, B;
  for(int i = 0; i < N; i++){
    cin >> A >> B;

    if(AB.count(A)){
      AB[A] += B;
    }else{
      AB[A] = B;
    }
  }

  long long int now_village = 0;

  for(auto next_village: AB){
    if(next_village.first - now_village > K){
      now_village += K;
      cout << now_village << endl;
      return 0;
    }

    K -= next_village.first - now_village;
    now_village = next_village.first;
    K += next_village.second;
  }
  now_village += K;
  cout << now_village << endl;
  return 0;
}
