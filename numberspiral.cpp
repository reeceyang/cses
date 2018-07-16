#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long y, x;
        cin >> y >> x;
        if (y > x) {
            if (y % 2 != 0) {
                cout << y * y - 2 * y + x + 1;
            } else {
                cout << y * y - x + 1;
            }
        }
        if (x > y) {
            if (x % 2 != 0) {
                cout << x * x - y + 1;
            } else {
                cout << x * x - 2 * x + y + 1;
            }
        }
        if (x == y) {
            cout << x * x - x + 1;
        }
        if (i != t - 1) {
            cout << "\n";
        }
    }
}
