#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vi adj[n];
    int team[n];
    REP(i, 0, n - 1) {
        team[i] = 0;
    }
    REP(i, 1, m) {
        int a, b;
        cin >> a >> b;
        adj[a - 1].PB(b - 1);
        adj[b - 1].PB(a - 1);
    }

    team[0] = 1;
    bool possible = true;
    REP(i, 0, n - 1) {
        cout << "at: " << i + 1 << "\n";
        for (auto f : adj[i]) {
            cout << "edge: " << f + 1 << " team: " << team[f] << "\n";
            if (team[f] == 0) {
                team[f] = team[i] == 1 ? 2 : 1;
            }
            if (team[f] == 1) {
                if (team[i] == 0) {
                    team[i] = 2;
                } else if (team[i] == 1) {
                    possible = false;
                }
            }
            if (team[f] == 2) {
                if (team[i] == 0) {
                    team[i] = 1;
                } else if (team[i] == 2) {
                    possible = false;
                }
            }
            cout << "switched to: " << team[f] << "\n";
        }
        if (!possible) {
            break;
        }
    }

    REP(i, 0, n - 1) {
        cout << team[i] << " ";
    }
}
