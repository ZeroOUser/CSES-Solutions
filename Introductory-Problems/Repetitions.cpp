#include <iostream>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0), cin.tie(), cout.tie();
    int n, cnt = 1, mx = 1, i;
    string input;
    cin >> input;
    for (i = 1; input[i] != '\0'; i++) {
        if (input[i] != input[i - 1]) mx = max(cnt, mx), cnt = 1;
        else cnt++;
    }
    cout << max(mx, cnt);
}