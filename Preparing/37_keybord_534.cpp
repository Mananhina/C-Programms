#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> expect(n);
  vector<int> real(n, 0);
  for (int i = 0; i < n; ++i) cin >> expect[i];
  int k; cin >> k;
  for (int i = 0; i < k; ++i){
    int j; cin >> j;
    real[j - 1]++;}
  for(int i = 0; i < n; ++i){
    if(real[i] > expect[i]) cout << "yes"<< "\n";
    else cout << "no" << "\n";
  }
}







