
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> ids;
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        ids.push_back(id);
    }

    set<int> songs;
    songs.insert(ids[0]);
    int maxSize = 1;
    int i = 0, j = 1;
    while (j <= n - 1) {
        if (songs.count(ids[j]) == 1) {
            songs.erase(ids[i]);
            i++;
        } else {
            songs.insert(ids[j]);
            j++;
        }
        if (songs.size() > maxSize) {
            maxSize = songs.size();
        }
    }
    cout << maxSize;
}
