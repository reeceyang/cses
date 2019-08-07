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
    REP(i, 1, m) {
        int a, b;
        cin >> a >> b;
        adj[a - 1].PB(b - 1);
        adj[b - 1].PB(a - 1);
    }

    queue<int> q;
    bool visited[n];
    REP(i, 0, n - 1) {
        visited[i] = false;
    }
    int distance[n];
    map<int, int> shortestpath;

    visited[0] = true;
    distance[0] = 0;
    q.push(0);
    shortestpath[0] = 0;
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        //cout << "s = " << s << "\n";
        for (auto u : adj[s]) {
            if (visited[u]) {
                continue;
            }
            visited[u] = true;
            distance[u] = distance[s] + 1;
            shortestpath[u] = s;
            //cout << "u = " << u << ", distance = " << distance[u] << "\n";
            q.push(u);
        }
    }

    /*for (auto x : shortestpath) {
        cout << "shortest path to " + to_string(x.F + 1) + " comes from " + to_string(x.S + 1) + "\n";
    }*/

    if (visited[n - 1]) {
        cout << distance[n - 1] + 1 << "\n";
        int pos = n - 1;
        vi path;
        path.PB(pos);
        while (pos != 0) {
            pos = shortestpath[pos];
            path.PB(pos);
        }
        for (int i = distance[n - 1] + 1 - 1; i >= 0; i--) {
            cout << path[i] + 1 << " ";
        }
    } else {
        cout << "IMPOSSIBLE";
    }
}
