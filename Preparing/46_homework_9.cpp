#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int sum = 0, product = 1;
  vector<int> nums(n);
  for(int i = 0; i < n; ++i){
    cin >> nums[i];
    if(nums[i] > 0) sum += nums[i];
  }
  int min_n = nums[0], max_n = nums[0];
  int max_i = 0, min_i = 0;
  for(int i = 1; i < n; ++i){
    if(nums[i] > max_n){
      max_n = nums[i];
      max_i = i;
    }
    if(nums[i] < min_n){
      min_n = nums[i];
      min_i = i;
    }
  }
  int s = min_i + max_i;
  max_i = max(max_i, min_i);
  min_i = s - max_i;
  for(int i = min_i + 1; i < max_i; i++) product *= nums[i];
  cout << sum << " " << product;
}
