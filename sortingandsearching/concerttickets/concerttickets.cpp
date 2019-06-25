#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> tickets;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        tickets.push_back(t);
    }

    sort(tickets.begin(), tickets.end());
    for (int i = 0; i < m; i++) {
        int price;
        cin >> price;
        //cout << price << " ";
        auto it = lower_bound(tickets.begin(), tickets.end(), price);
        //cout << distance(tickets.begin(), it) << " " << *it << " ";
        if (it == tickets.end() && !(*(it - 1) <= price)) {
            cout << "-1";
        } else if (*it <= price) {
            cout << *it;
            tickets.erase(it);
        } else if (it == tickets.begin()) { // and this means *it != price
            cout << "-1";
        } else {
            cout << *(it - 1);
            tickets.erase(it - 1);
        }
        if (i != m - 1) {
            cout << "\n";
        }
    }
}
