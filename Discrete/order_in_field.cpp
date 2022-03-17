#include <iostream>
using namespace std;

int main(){
  int64_t a, p; cin >> a >> p;
  int64_t i = 1, res = a;
  while(res % p != 1){
    i++;
    res = res * a % p;
  }
  cout << i;
}


