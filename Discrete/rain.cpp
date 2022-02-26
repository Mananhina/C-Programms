#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  vector<vector<int>> adj(n, vector<int>(n));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j) cin >> adj[i][j];
  }

  vector<int> colours(n);
  for(int i = 0; i < n; ++i){
    cin >> colours[i];
  }

  int c = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; ++j){
      if(adj[i][j] == 1 && colours[i] != colours[j]) c++;
    }
  }
  cout << c;
}