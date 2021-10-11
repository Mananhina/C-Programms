//не сдана
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int32_t x1, y1, x2, y2, n, xh, yh, answer = 0;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> n;
  answer = n + 1;
  for(int i = 1; i <= n; i++){
    cin >> xh >> yh;
    float s1 = sqrt((x1 - xh)*(x1 - xh) + (y1 - yh)*(y1 - yh));
    float s2 = sqrt((x2 - xh)*(x2 - xh) + (y2 - yh)*(y2 - yh));
    if(s1 * 2 < s2){
      answer = min(answer, i);
    }
  }
  if(answer == n + 1){
    cout << "NO" << endl;
  }
  else{
    cout << answer << endl;
  }
}