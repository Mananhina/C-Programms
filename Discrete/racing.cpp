#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  vector<int> horse(n, 0);

  int x; cin >> x;
  while(x != 0){
    int y; cin >> y;
    horse[y - 1] = 1;
    cin >> x;
  }

  int sum = 0;
  for(int i = 0; i < n; ++i) sum += horse[i];

  if((sum == n - 1) && (horse[k - 1] == 0)) cout << "Yes";
  else cout << "No";

}
