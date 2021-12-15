#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = 0, inc;
  cin >> n;
  vector<int> incomes(n);
  vector<int> taxes(n);

  for(int i = 0; i < n; ++i) cin >> incomes[i];
  for(int i = 0; i < n; ++i) cin >> taxes[i];

  inc = 0;

  for(int i = 0; i < n; ++i){
    if(taxes[i] * incomes[i] > inc){
      inc = taxes[i] * incomes[i];
      ans = i;
    }
  }
  cout << ans + 1;
}
