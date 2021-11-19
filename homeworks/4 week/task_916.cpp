#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie();
  cout.tie();
  int n, k; cin >> n >> k;
  int sum = 0;
  vector<int> costs(n);
  for(int i = 0; i < n; ++i) cin >> costs[i];
  sort(costs.begin(), costs.end());
  reverse(costs.begin(), costs.end());
  for(int i = 0; i < n / k; i++){
    for(int j = 0; j < k; j++){
      sum += costs[i*3 + j] * (i + 1);
    }
  }
  for(int i = 0; i < n - (n / k) * k; ++i) sum += costs[n / k * k + i] * (n / k + 1);
  cout << sum;
}
