#include <iostream>
using namespace std;

int main()
{
    int w, h, r;
    cin >> w >> h >> r;
    if (min(w, h) >= r*2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
