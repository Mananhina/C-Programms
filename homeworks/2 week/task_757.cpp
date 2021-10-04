#include <iostream>
using namespace std;

int main() {
  int64_t c, h, o;
  cin >> c >> h >> o;
  cout << min(min(c / 2, h / 6), o) << endl;
}