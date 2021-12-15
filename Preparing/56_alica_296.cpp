#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  if(n % 5 == 0) cout << n / 5 << " " << 0;
  else{
    int count5 = n / 5;
    while((n - 5 * count5) % 3 != 0) count5--;
    cout << count5 << " " << (n - 5 * count5) / 3;
  }
}
