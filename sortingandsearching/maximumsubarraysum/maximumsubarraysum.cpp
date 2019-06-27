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

    ll n;
    cin >> n;
    vector<ll> x;
    REP(i, 1, n) {
        ll xi;
        cin >> xi;
        x.PB(xi);
    }

    ll maxsum = x[0];
    ll sum = x[0];
    REP(i, 1, n - 1) {
        if (sum + x[i] > x[i]) {
            sum += x[i];
        } else {
            sum = x[i];
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
        //cout << sum << " " << maxsum << "\n";
    }
    cout << maxsum;
}
