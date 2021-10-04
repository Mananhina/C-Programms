#include <iostream>
using namespace std;

int main() {
  int64_t n, max_score, min_score;
  cin >> n;
  max_score = n * 6;
  min_score = n/6 + ((n % 6) / 5) * 2 + (((n % 6) % 5) / 4) * 3 + ((((n % 6) % 5) % 4) / 3) * 4 + (((((n % 6) % 5) % 4) % 3) / 2) * 5 + ((((((n % 6) % 5) % 4) % 3) % 2) / 1) * 6;
  cout << min_score << " " << max_score << endl;
}