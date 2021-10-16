#include <iostream>
using namespace std;

int main(){
  int a, c;
  cin >> a >> c;
  if(a != 0 || c == 0) cout << max(a, c) << " " << a + c - 1*(c != 0);
  else cout << "Impossible";
}