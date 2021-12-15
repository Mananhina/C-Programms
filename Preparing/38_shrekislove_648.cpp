#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> cards(n);
  for(int i = 0; i < n; i++) cin >> cards[i];
  sort(cards.begin(), cards.end());
  int p_sum = 0, c_sum = 0;
  for(int i = 0; i < n / 2; ++i) c_sum += cards[i];
  for(int i = n / 2; i < n; ++i) p_sum += cards[i];
  cout << p_sum - c_sum;
}