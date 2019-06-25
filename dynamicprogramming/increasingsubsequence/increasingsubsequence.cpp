#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> seq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        seq.push_back(x);
    }

    vector<int> value;
    int maxLength = 1;
    for (int i = 0; i < n; i++) {
        int maxValue = 0;
        for (int j = 0; j < i; j++) {
            if (seq[j] < seq[i] && value[j] > maxValue) {
                maxValue = value[j];
            }
        }

        value.push_back(maxValue + 1);
        if (value[i] > maxLength) {
            maxLength = value[i];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << seq[i] << " " << value[i] << "\n";
    }
    cout << maxLength;
}
