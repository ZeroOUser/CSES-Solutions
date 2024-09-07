#include <iostream>
#include <vector>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false), cin.tie(), cout.tie();
    long long n, i;
    cin >> n;
    long long sum = (n * (n + 1)) >> 1, partial_sum = sum >> 1;
    if (partial_sum * 2 != sum) {
        cout << "NO";
        return 0;
    }
    bool a[++n];
    for (i = 0; i < n; i++) a[i] = true;

    int left = 1, right = n - 1;
    vector <int> v;
    while (left <= right && partial_sum) {
        if (partial_sum < n && a[partial_sum]) {
            v.push_back(partial_sum);
            a[partial_sum] = false;
            break;
        }
        if (partial_sum >= right)
            partial_sum -= right, v.push_back(right), a[right] = false, right--;
        else
            partial_sum -= left, v.push_back(left), a[left] = false, left++;
    }
    int sz = v.size();
    cout << "YES\n" << sz << '\n';
    for (i = 0; i < sz; i++) cout << v[i] << ' ';
    cout << '\n' << n - sz - 1 << '\n';
    for (i = 1; i < n; i++)
        if (a[i])
            cout << i << ' ';
}