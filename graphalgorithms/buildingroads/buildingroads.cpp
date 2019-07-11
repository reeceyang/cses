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

    bool visited[n];
    vi adj[n];

    REP(i, 0, n - 1) {
        visited[i] = false;
    }

    /* testing visited values. turns out I needed to initialize visited with all
    false

    REP(i, 0, n - 1) {
        if (visited[i]) {
            cout << i + 1 << " visited \n";
        } else {
            cout << i + 1 << " not visited \n";
        }
    }*/

    function<void(int)> dfs = [&] (int s) -> void {
        //cout << "Got to " << s + 1 << "\n";
        if (visited[s]) {
            return;
        }
        visited[s] = true;
        for (auto u : adj[s]) {
            //cout << "At " << s + 1 << ", going to " << u + 1 << "\n";
            dfs(u);
        }
    };

    REP(i, 1, m) {
        int a, b;
        cin >> a >> b;
        adj[a - 1].PB(b - 1);
        adj[b - 1].PB(a - 1);
    }

    int num_components = 0;
    vi sep_cities;
    REP(i, 0, n - 1) {
        //cout << "Trying " << i + 1 << "\n";
        if (!visited[i]) {
            sep_cities.PB(i);
            //cout << "Found another component: " << i + 1 << "\n";
            num_components++;
            dfs(i);
        }
    }

    cout << num_components - 1 << "\n";
    REP(i, 0, num_components - 1 - 1) {
        cout << sep_cities[i] + 1 << " " << sep_cities[i + 1] + 1 << "\n";
    }
}
