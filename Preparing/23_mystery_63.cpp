#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int s, p;
  cin >> s >> p;
  cout << (s  - sqrt(s*s - 4*p))/2 << " " << (s  + sqrt(s*s - 4*p))/2;
}
