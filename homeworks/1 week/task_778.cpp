#include <iostream>
using namespace std;

int main()
{
  int num = 0, cur;
  for (int i=31;  i > 0; --i) {
    cin >> cur;
    num += cur;
  }
  cout << (num) / 27 << endl;
  return 0;
}