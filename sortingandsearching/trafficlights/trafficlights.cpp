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

    int x, n;
    cin >> x >> n;
    vi p {0, 0 + x};
    vi gaps {0 + x, 0};
    cout << "\nCheck gap[0]" << gaps[0] << "\n";

    REP(i, 1, n) {
        int streetlight;
        cin >> streetlight;
        auto index = upper_bound(p.begin(), p.end(), streetlight) - p.begin();
        cout << index << " (found index)\n";
        p.insert(p.begin() + index, streetlight);
        cout << "(inserted streetlamp):\n";
        for (auto x : p) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "first gap" << p[index] - p[index - 1] << "\n";
        for (auto x : gaps) {
            cout << x << " ";
        }
        cout << "\n";
        gaps.insert(p.begin() + index, p[index] - p[index - 1]);
        cout << "(inserted gaps)\n";
        for (auto x : gaps) {
            cout << x << " ";
        }
        cout << "\n";
        gaps[index + 1] = p[index + 1] - p[index];
        cout << "(updated gaps position)\n";

        int maxgap = 0;
        for (auto x : gaps) {
            cout << x << " - checking for maxgap\n";
            if (x > maxgap) {
                maxgap = x;
            }
        }
        cout << x << " ";
    }
}
