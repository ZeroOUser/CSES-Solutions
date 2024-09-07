#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    int n, i;
    cin >> n;
    if (n > 1 && n < 4) {
        cout << "NO SOLUTION";
        return 0;
    }
    for (i = 2; i <= n; i += 2)
        cout << i << ' ';
    for (i = 1; i <= n; i += 2)
        cout << i << ' ';
}