#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, d; cin >> n >> d;
  vector<int> weights(n);
  for(int i = 0; i < n; ++i) cin >> weights[i];
  sort(weights.begin(), weights.end());
  int cnt = 0;
  int i = 0, j = n - 1;
  while(i < j){
    if(weights[i] + weights[j] <= d){
      cnt++;
      i++;
      j--;
    }
    else{
      j--;
      cnt++;
    }
  }
  if(i == j) cnt++;
  cout << cnt;
}