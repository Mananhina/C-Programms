#include <iostream>
using namespace std;

int main() {
  cin.tie(); cout.tie();
  int n, c = 0;
  cin >> n;
  int a; cin >> a;
  for(int i = 0; i < n - 1; ++i){
    int b; cin >>b;
    if(b != a + 1) c++;
    a = b;
  }
  cout << c;
}
