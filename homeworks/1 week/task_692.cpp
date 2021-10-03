#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, k = 1;
  cin >> n;
  for (int i = 1; pow(2, i) <= n; i ++) {
    k = pow(2, i);
  }
  if (n == k){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}

