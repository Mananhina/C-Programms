#include <iostream>
using namespace std;

int main(){
  int k;
  cin >> k;
  if(k > 145) cout << "NO";
  else cout << (k - 1)* 5 / 60 << " " << (k - 1)* 5 % 60;
}
