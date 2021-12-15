#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; ++i) cin >> nums[i];
  int min_n = nums[0], min_i = 0;
  for(int i = 1; i < n; i++){
    if(nums[i] < min_n){
      min_n = nums[i];
      min_i = i;
    }
  }
  for(int i = min_i; i < n; ++i) cout << nums[i] << " ";
  for(int i = 0; i < min_i; ++i) cout << nums[i] << " ";
}
