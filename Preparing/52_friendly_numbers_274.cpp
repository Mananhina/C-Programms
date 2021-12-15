#include <bits/stdc++.h>
using namespace std;

int main(){
  int k; cin >> k;
  for(int i = 0; i < k; ++i){
    set<int> aset;
    set<int> bset;
    int a, b; cin >> a >> b;
    while(a > 0){
      aset.insert(a % 10);
      a = a / 10;
    }
    while(b > 0){
      bset.insert(b % 10);
      b = b / 10;
    }
    if(aset == bset) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
}
