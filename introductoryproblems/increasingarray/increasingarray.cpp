#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        x.push_back(j);
    }
    long long turns = 0;
    for (int i = 1; i < n; i++) {
        if (x[i] < x[i - 1]) {
            turns += x[i - 1] - x [i];
            //cout << turns << "\n";
            x[i] = x[i - 1];
        }
    }
    cout << turns;
}
