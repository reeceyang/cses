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
    vi apples;
    REP(i, 1, n) {
        int weight;
        cin >> weight;
        apples.PB(weight);
    }
    sort(apples.rbegin(), apples.rend());

    int pile1 = 0, pile2 = 0;
    for (auto weight : apples) {
        if (pile1 + weight - pile2 > pile2 + weight - pile1) {
            pile2 += weight;
        } else {
            pile1 += weight;
        }
        cout << pile1 << " " << pile2 << "\n";
    }

    cout << abs(pile1 - pile2);
}
