#include <iostream>
using namespace std;
int my_pow (long long &n, int k) {
    if (k == 0)
        return 1;
    long long res = my_pow(n, k >> 1);
    res = (res * res) % (int) (1e9 + 7);
    if (k & 1) res *= n;
    return res % (int) (1e9 + 7);
}
int main () {
    ios_base::sync_with_stdio(false), cin.tie(), cout.tie();
    long long n = 2;
    int k;
    cin >> k;
    cout << my_pow(n, k);
}