#include <iostream>
using namespace std;

int main(){
  int n, n1 = 1, cur_n = 1, change;
  cin >> n;
  while(n - 1 > 0){
    change = cur_n;
    cur_n = (n1 + cur_n) % 10;
    n1 = change;
    n -= 1;
  }
  cout << cur_n;
}
