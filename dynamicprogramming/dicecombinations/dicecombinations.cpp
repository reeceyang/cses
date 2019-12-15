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

    vll combinations;
    REP(i, 1, n) {
        ll thiscombos = 0;
        ll j = 1;
        while (j <= 6 && i - j >= 1) {
            thiscombos += combinations[i - 1 - j] % 1000000007;
            j++;
        }
        if (i <= 6) {
            thiscombos++;
        }
        combinations.PB(thiscombos % 1000000007);
        //cout << "n:" << i << " this combos: " << thiscombos << "\n";
    }

    cout << combinations[n - 1];
}
