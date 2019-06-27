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

    int n, x;
    cin >> n >> x;

    vi a;
    vi asorted;
    REP(i, 1, n) {
        int ai;
        cin >> ai;
        a.PB(ai);
        asorted.PB(ai);
    }

    sort(asorted.begin(), asorted.end());
    int pos1 = -1, pos2 = -1;
    REP(i, 0, n - 1) {
        auto k = lower_bound(asorted.begin(), asorted.end(), x - a[i]) - asorted.begin();
        if (!(k < n && asorted[k] == x - a[i])) {
            continue;
        }
        REP(j, i + 1, n - 1) {
            if (a[i] + a[j] == x) {
                pos1 = i;
                pos2 = j;
                break;
            }
        }
        if (pos1 != -1) {
            break;
        }
    }
    if (pos1 == -1) {
        cout << "IMPOSSIBLE";
    } else {
        cout << pos1 + 1 << " " << pos2 + 1;
    }
}
