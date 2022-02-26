#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<vector<int>> table(n, vector<int>(m, n + m + 1));
  int k; cin >> k;
  vector<int> coords(2 * k);
  for(int i = 0; i < k; ++i) cin >> coords[i * 2] >> coords[i * 2 + 1];

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      for(int c = 0; c < k; c++){
        int distance = abs(coords[c * 2] - 1 - i) + abs(coords[c * 2 + 1] - 1 - j);
        table[i][j] = min(table[i][j], distance);
      }
    }
  }

  int answer = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; ++j) answer = max(answer, table[i][j]);
  }
  cout << answer;
}