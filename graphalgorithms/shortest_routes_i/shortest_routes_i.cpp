#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define TRAV(a, x) for (auto& a : x)

void setIO(string name) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen((name+".in").c_str(),"r",stdin);
    freopen((name+".out").c_str(),"w",stdout);
}

int main() {
    //setIO("name");

    int n, m;
    cin >> n >> m;

    vpi adj[n];
    REP(i, 1, m) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a - 1].PB({b - 1, c});
        adj[b - 1].PB({a - 1, c});
    }
}
