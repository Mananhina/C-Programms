#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, s; cin >> n >> s;
  int cur_s = 0;
  vector<int> costs(n);
  for(int i = 0; i < n; ++i) cin >> costs[i];
  sort(costs.begin(), costs.end());
  for(int i = 0; cur_s < s; ++i){
    cur_s += costs[i];
    if(cur_s == s) cout << ++i;
    if(cur_s > s) cout << i;
  }
}
