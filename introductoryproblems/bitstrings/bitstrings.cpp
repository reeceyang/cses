#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int bitstrings = 1;
    for (int i = 0; i < n; i++) {
        bitstrings *= 2;
        bitstrings %= (1000000000+7);
    }

    cout << bitstrings;
}
