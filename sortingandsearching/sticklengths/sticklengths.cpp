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

    ll n;
    cin >> n;

    vll p;
    ll total = 0;
    REP(i, 1, n) {
        ll stick;
        cin >> stick;
        p.PB(stick);
        total += stick;
    }

    ll flooraverage = total / n;
    ll ceilaverage = total / n + 1;
    //sort(p.begin(), p.end());
    ll floorcost = 0;
    ll ceilcost = 0;
    REP(i, 0, n - 1) {
        floorcost += abs(flooraverage - p[i]);
        ceilcost += abs(ceilaverage - p[i]);
    }

    cout << min(floorcost, ceilcost);
}
