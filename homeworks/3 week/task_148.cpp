#include <iostream>
using namespace std;

int main(){
  int64_t a, b, d;
  cin >> a >> b;
  while(b != 0){
    d = a % b;
    a = b;
    b = d;
  }
  cout << a;
}