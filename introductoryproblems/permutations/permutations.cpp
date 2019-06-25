#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        if (n % 2 == 0) {
            for (int i = 1; i < n - 1; i += 2) {
                cout << i << " ";
            }
            cout << n - 1;
        } else {
            for (int i = 1; i < n; i += 2) {
                cout << i << " ";
            }
            cout << n;
        }
    }
}
