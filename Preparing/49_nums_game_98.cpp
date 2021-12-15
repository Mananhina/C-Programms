#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> nums(n);
  for(int i = 0; i < n; i++) cin >> nums[i];
  int i1 = 0, i2 = n - 1;
  int sum1 = 0, sum2 = 0;
  while(min(i1, i2) + 1 <= max(i1, i2)){
    if(nums[min(i1, i2)] >= nums[max(i1, i2)]){
      int s = i1 + i2;
      i1 = min(i1, i2);
    }
  }
  cout << sum1 << ":" <<sum2;
}
