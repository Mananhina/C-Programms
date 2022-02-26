#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<vector<int>> cross(n, vector<int>(n, 0));

  for(int i = 0; i < m; ++i){
    int k, l; cin >> k >> l;
    cross[k - 1][l - 1]++;
    cross[l - 1][k - 1]++;
  }
  int number;
  for(int j = 0; j < n; j++){
    number = 0;
    for(int i = 0; i < n; i++){
      number += cross[i][j];
    }
    cout << number << " ";
  }
}