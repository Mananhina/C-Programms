#include <iostream>
using namespace std;

int main()
{
  int a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  int ma = max(max(a1, a2), a3);
  int na = min(min(a1, a2), a3);
  int da = a1 + a2 + a3 - ma - na;
  int mb = max(max(b1, b2), b3);
  int nb = min(min(b1, b2), b3);
  int db = b1 + b2 + b3 - mb - nb;
  cout << (ma * mb) + (na * nb) + (db * da)<< endl;
  return 0;
}