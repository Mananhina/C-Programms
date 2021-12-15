#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, ans = 0;
  cin >> n;

  vector<int> vec(n);
  for(int i = 0; i < n; ++i) cin >> vec[i];

  cin >> k;
  for(int i = 0; i < vec.size(); ++i) ans += min(k, vec[i]);
  cout << ans;
}
