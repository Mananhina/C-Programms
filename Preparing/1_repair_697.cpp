#include <iostream>
using namespace std;

int main()
{
    int l, w, h;
    cin >> l >> w >> h;
    int sq = 2 * h * (l+w);
    cout << (sq - 1) / 16 + 1 << endl;
    return 0;
}
