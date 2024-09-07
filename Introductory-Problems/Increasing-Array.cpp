#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    int n, i, mx = 0, value;
    long long min_moves = 0;
    cin >> n;
    while (n--) {
        cin >> value;
        mx = max(value, mx);
        min_moves += (mx - value);
    }
    cout << min_moves;
}