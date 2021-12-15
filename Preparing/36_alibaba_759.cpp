#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<int> tres;
  int an = 0;
  for(int i = 0; i < n; ++i){
    int t; cin >> t;
    if(t > 0){
      tres.push_back(t);
      an++;
    }
  }
  sort(tres.begin(), tres.end());
  int cost = 0;
  if(an < m) m = an;
  for(int i = an - m; i < an; i++) cost += tres[i];
  cout << cost;
}
