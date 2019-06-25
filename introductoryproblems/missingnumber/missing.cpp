#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n - 1; i++) {
        int l;
        cin >> l;
        numbers.push_back(l);
    }
    sort(numbers.begin(), numbers.end());
    int k = 1;
    while (k != n) {
        if (numbers[k - 1] != k) {
            break;
        }
        k++;
    }
    cout << k;
}
