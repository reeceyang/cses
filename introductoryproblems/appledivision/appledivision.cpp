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

    int n;
    cin >> n;
    vll apples;
    ll sum = 0;
    REP(i, 1, n) {
        ll weight;
        cin >> weight;
        apples.PB(weight);
        sum += weight;
    }

    vll pile1;
    pile1.PB(0);
    ll minDiff = sum;
    REP(j, 0, n - 1) {
        int m = pile1.size();
        REP(i, 0, m - 1) {
            pile1.PB(pile1[i] + apples[j]);
            if (abs(sum - 2 * (pile1[i] + apples[j])) < minDiff) {
                minDiff = abs(sum - 2 * (pile1[i] + apples[j]));
            }
        }
    }

    cout << minDiff;
}
