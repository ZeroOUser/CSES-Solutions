#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    long long n;
    cin >> n;
    while (n > 1){
        cout << n << ' ';
        if (n & 1)
            n = (n * 3) + 1;
        else
            n >>= 1;
    }
    cout << n;
}