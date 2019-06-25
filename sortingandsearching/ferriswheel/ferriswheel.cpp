#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> children;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        children.push_back(p);
    }

    sort(children.begin(), children.end());
    int gondolas = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        if (children[i] + children[j] > x) {
            gondolas++;
            j--;
        } else {
            gondolas++;
            j--;
            i++;
        }
        if (i == j) {
            gondolas++;
        }
    }
    cout << gondolas;
}
