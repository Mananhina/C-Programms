#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int m = max(a, b);
  int n = min(a, b);
  cout << (m + 1) / 2 << " "<< n << endl;
  return 0;
}