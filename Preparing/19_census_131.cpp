#include <iostream>
using namespace std;

int main(){
  int n, count, v, s, mv = 0, mn = -1;
  cin >> n;
  count = n;
  while(count--){
    cin >> v >> s;
    if(s == 1 && v > mv){
      mv = v;
      mn = n - count;
    }
  }
  cout << mn;
}