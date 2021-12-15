#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> sp(n);
  vector<int> bp(n);
  for(int i = 0; i < n; ++i) cin >> sp[i];
  for(int i = 0; i < n; ++i){
    int ind = sp[i] - 1;
    bp[ind] = i + 1;
  }
  for(auto i : bp) cout << i << " ";
}
