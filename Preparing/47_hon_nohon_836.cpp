#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> nums;
  int alm = 0;
  for(int i = 0; i < n; ++i){
    int el; cin >> el;
    if((el % 2 == 0) && ((el / 64) % 2 == 1)){
      nums.push_back(el);
      alm++;
    }
  }
  cout << alm << "\n";
  sort(nums.begin(), nums.end());
  for(auto a : nums) cout << a << " ";
}
