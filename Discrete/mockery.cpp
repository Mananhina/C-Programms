#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  vector<vector<int>> lens(n,vector<int>(n));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j) cin >> lens[i][j];
  }

  int answer = 3001;
  for(int i = 0; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      for(int k = j + 1; k < n; ++k){
        answer = min(answer, lens[i][j] + lens[j][k] + lens[k][i]);
      }
    }
  }
  cout << answer;
}
