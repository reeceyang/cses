#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi towers;
    int firstTower;
    cin >> firstTower;
    towers.PB(firstTower);

    REP(i, 2, n) {
        /* print towers
        REP(j, 0, towers.size() - 1) {
            cout << towers[j] << " ";
        }
        cout << "\n";*/
        int tower;
        cin >> tower;
        auto k = upper_bound(towers.begin(), towers.end(), tower) - towers.begin();
        //cout << tower << " upper_bound: " << k << "\n";
        if (k < towers.size()) {
            towers[k] = tower;
        } else {
            towers.PB(tower);
        }
    }

    cout << towers.size();
}
