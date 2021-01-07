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

void setIO() {
    ios_base::sync_with_stdio(0); cin.tie(0);
}

int main() {
    //setIO();

    ll n, m, k;
    cin >> n >> m >> k;

    vll applicants;
    REP(i, 1, n) {
      ll a;
      cin >> a;
      applicants.PB(a);
    }

    vll apartments;
    REP(i, 1, m) {
      ll a;
      cin >> a;
      apartments.PB(a);
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    ll total = 0;
    int start = 0;
    TRAV(a, apartments) {
      auto it = lower_bound(applicants.begin() + start, applicants.end(), a - k);
      auto x = it - applicants.begin();
      if (x < n && a >= applicants[x] - k && a <= applicants[x] + k) {
        //cout << "gave " << a << " to " << applicants[x] << "\n";
        total++;
        //applicants.erase(it);
        start = x + 1;
      } else {
        //cout << "couldn't give " << a << " to " << applicants[x] << "\n";
      }
    }

    cout << total;
}
