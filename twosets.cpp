#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO";
    } else {
        cout << "YES\n";
        if (n % 2 != 0) {
            cout << (n + 1) / 2 << "\n";
            long long currentSum = 0;
            int i = 1;
            while ((sum / 2) - currentSum > 1 + n) {
                cout << i << " " << n - i + 1 << " ";
                currentSum += n + 1;
                i++;
            }
            cout << i << " " << (n + 1) / 2 << "\n";
            cout << (n - 1) / 2 << "\n";
            for (int j = i + 1; j < (n + 1) / 2; j++) {
                cout << j << " " << n - j + 1 << " ";
            }
            cout << (n + 1) / 2 + (n + 1) / 4 << "\n";
        } else {
            cout << n / 2 << "\n";
            for (int i = 1; i <= n / 4; i++) {
                cout << i << " " << n - i + 1;
                if (i != n / 4) {
                    cout << " ";
                }
            }
            cout << "\n" << n / 2 << "\n";
            for (int i = n / 4 + 1; i <= n / 2; i++) {
                cout << i << " " << n - i + 1;
                if (i != n / 2) {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
}
