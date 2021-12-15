#include <iostream>
using namespace std;

int main()
{
  int n, a, b, l, r;
  cin >> n >> a >> b;
  l = abs(a - b);
  r = (n - max(a, b) + min(a, b));
  cout << min(l, r) - 1 << endl;
  return 0;
}
