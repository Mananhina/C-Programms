#include <iostream>
using namespace std;

int check_sum(int64_t a){
  int check = 0;
  while(a > 0){
    check += a % 2;
    a = a / 2;
  }
  return check;
}

int main(){
  int64_t n;
  cin >> n;
  cout << n + check_sum(n);
}
