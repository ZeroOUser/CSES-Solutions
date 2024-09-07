#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    int n, num;
    cin >> n;
    int i = n;
    n++;
    bool a[n] {false};
    while (--i) {
        cin >> num;
        a[num] = true;
    }
    for (i = 1; i < n; i++)
        if (!a[i]) {
            cout << i;
            return 0;
        }

}