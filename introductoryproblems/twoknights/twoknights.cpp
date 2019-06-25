#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    for(long long k = 1; k <= n; k++) {
        cout << k * k * (k * k - 1) / 2 - 2 * 2 * (k - 1) * (k - 2);
        if (k != n) {
            cout << "\n";
        }
    }
}
