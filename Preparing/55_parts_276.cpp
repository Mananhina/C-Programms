#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int div = n / m;
  if(n % m == 0){
    for(int i = 0; i < m; ++i) cout << n / m << " ";
  }
  else{
    for(int i = 0; i < m -(n % m); ++i) cout << div << " ";
    for(int i = 0; i < n % m; ++i) cout << div + 1 << " ";
  }
}