#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> even;
  vector<int> odd;
  for(int i = 0; i < n; ++i){
    int a; cin >> a;
    if(a % 2 == 0) even.push_back(a);
    else odd.push_back(a);
  }
  for(int a : odd) cout << a << " ";
  cout << "\n";
  for(int a : even) cout << a << " ";
  cout << "\n";
  if(even.size() >= odd.size()) cout << "YES";
  else cout << "NO";
}