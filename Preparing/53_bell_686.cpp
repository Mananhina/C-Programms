#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> first(n), second(n);
  for(int i = 0; i < n; ++i) cin >> first[i];
  sort(first.begin(), first.end());
  int left = 0, right = n - 1;
  for(int i = 0; i < n; ++i){
    if(i % 2 == 0){
      second[left] = first[i];
      left++;
    }
    else{
      second[right] = first[i];
      right--;
    }
  }
  for(int i = 0; i < n; ++i) cout << second[i] << " ";
}

