#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int a_last_digit, cut_power, period = 4;
  a_last_digit = a % 10;
  cut_power = b % period + period * (b % period == 0);

  cout << int(pow(a_last_digit, cut_power)) % 10;
}
