#include<bits/stdc++.h>
using namespace std;
int main(){
  int m, n; cin >> m >> n;
  set<int> mset;
  set<int> nset;
  for(int i = 0; i < m; i++){
    int el; cin >> el;
    mset.insert(el);
  }
  for(int i = 0; i < n; i++){
    int el; cin >> el;
    nset.insert(el);
  }
  if(mset == nset) cout << 1;
  else cout << 0;
}