#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> x;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        x.push_back(l);
    }
    vector<int> window;
    for (int j = 0; j < k; j++) {
        window.push_back(x[j]);
    }
    sort(window.begin(), window.end());
    int medianIndex = (k - 1) / 2;
    /*if (k % 2 == 0) {
        if ((window[k / 2] + window[(k / 2) - 1]) % 2 == 0) {
            medianIndex = (window[k / 2] + window[(k / 2) - 1]) / 2;
        } else {
            median = (window[k / 2] + window[(k / 2) - 1] - 1) / 2; // + or - 1, doesn't matter which way you round the median
        }
    } else {
        median = window[(k - 1) / 2];
    }*/
    for (int i = 0; i < n - k + 1; i++) {
        int cost = 0;
        for (int j = 0; j < k; j++) {
            cost += abs(median - window[j]);
        }
        cout << cost;
        if (i != n - k) {
            cout << " ";
        }
    }
}
