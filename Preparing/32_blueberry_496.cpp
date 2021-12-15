#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int max_s = 0;
  int a, b; cin >> a >> b;
  int a1 = a, b1 = b;
  for(int i = 0; i < n - 2; ++i) {
    int c; cin >> c;
    if(a + b + c > max_s) max_s = a + b + c;
    a = b;
    b = c;
  }
  if(a + b + a1 > max_s) max_s = a + b + a1;
  a = b; b = a1;
  if(a + b + b1 > max_s) max_s = a + b + b1;
  cout << max_s;
}
