#include <iostream>
using namespace std;

int main()
{
  int n, a, b, cur_a = 0, cur_b = 32;
  cin >> n;
  while(n > 0){
    cin >> a >> b;
    cur_a = max(cur_a, a);
    cur_b = min(cur_b, b);
    n -= 1;
  }
  if(cur_a <= cur_b) cout << "YES" << endl;
  else cout << "NO" << endl;
}
