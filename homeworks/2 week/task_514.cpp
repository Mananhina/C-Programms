//сдана
#include <iostream>
using namespace std;

int main()
{
  int i = 1, n;
  cin >> n;
  while((1 + i)*i/2 < n){
    i += 1;
  }
  cout << max(n - (i - 1)*i/2, i - 1) << endl;
}

