#include <iostream>
using namespace std;

int main(){
  int n, answer = 0, a;
  cin >> n;
  for(int i = 0; i < n*n; ++i){
    cin >> a;
    answer += a;
  }
  cout << answer / 2;
}
