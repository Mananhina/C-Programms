#include <iostream>
using namespace std;

int main()
{
  int n, cur;

  cin >> n;
  for (int i=1; i <= n; i++) {
    cin >> cur;
    if (cur <= 437) {
      cout << "Crash " << i << endl;
      return 0;
    }
  }
  cout << "No crash" << endl;
  return 0;
}
