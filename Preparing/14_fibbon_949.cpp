#include <iostream>
using namespace std;

int main()
{
  int64_t n, an, an1;
  cin >> n >> an >> an1;
  while(n > 1){
    an = an1 - an;
    an1 = an1 - an;
    n -= 1;
  }
  cout << an << " " << an1 << endl;
}
