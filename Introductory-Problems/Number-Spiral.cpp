#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    int t;
    long long x, mx,  y, pos;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        mx = max(x, y);
        pos = (mx - 1) * (mx - 1);
        if (mx & 1)
            pos += (mx - x) + y;
        else
            pos += (mx - y) + x;
        cout << pos << '\n';
    }
}