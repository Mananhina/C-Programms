#include <iostream>
using namespace std;

int main()
{
  int n ;
  cin >> n;
  if (n % 3 == 0){
    cout << "GCV" << endl;
  }
  else {
    if (n % 3 == 1) {
      cout << "VGC" << endl;
    }
    else {
      cout << "CVG" << endl;
    }
  }
  return 0;
}