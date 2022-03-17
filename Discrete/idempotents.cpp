#include <iostream>
using namespace std;

int gcd(int a, int b){
  return b != 0 ? gcd(b, a % b) : a;
}

int main(){
  int n; cin >> n;
  bool flag = true;
  for(int64_t i = 2; i < n; ++i){
    if(gcd(n, i) != 1){
      unsigned long long t = (i * i);
      if( t % n == i){
        cout << i << " ";
        flag = false;
      }
    }
  }
  if(flag) cout << -1;
}

