#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  cin.tie(0);
  int n; cin >> n;
  vector<int> elements(n);
  for(int i = 0; i < n; ++i) cin >> elements[i];
  int m; cin >> m;
  for(int i = 0; i < m; ++i){
    int ik, jk; cin >> ik >> jk;
    --ik; --jk;
    for(int j = ik; j <= jk; ++j) cout << elements[j] << " ";
    cout << "\n";
  }
}
