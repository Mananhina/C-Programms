#include <iostream>
using namespace std;

int64_t m = 1000*1000*1000 + 7;
int64_t cnk(int64_t k, int64_t n){
  if (k >= n / 2) k = n - k;

  int64_t result = n;
  for(int64_t i = 2; i <= k; ++i) {
    result *= (n-i+1);
    result /= i;
    result %= m;
  }
  return result;
}

int main(){
  int64_t k, n; cin >> k >> n;
  cout << cnk(k, n);
}