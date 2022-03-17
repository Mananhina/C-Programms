#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  return b != 0 ? gcd(b, a % b) : a;
}

int phi(int q, int k){
  return (q == 2)&&(k > 2) ? pow(q, k - 1)*(q - 1)*0.5 :  pow(q, k - 1)*(q - 1);
}

int main(){
  int n; cin >> n;
  int x = n;
  int answer = 1;

  for (int i = 2; i * i <= n; i++) {
    int k = 0;
    while (x % i == 0) {
      k += 1;
      x /= i;
    }
    if(k != 0) answer = (answer * phi(i, k)) / gcd(answer, phi(i, k));
  }

  if (x != 1){
    answer = (answer * phi(x, 1)) / gcd(answer, phi(x, 1));
  }

  cout << answer;
}



