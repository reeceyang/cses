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

    string s;
    cin >> s;
    int n = s.size();

    char characters[n];
    strcpy(characters, s.c_str());
    sort(characters, characters + n);

    string buffer = "";
    int counter = 0;
    do {
        counter++;
        REP(i, 0, n - 1) {
            buffer += characters[i];
        }
        buffer += "\n";
    } while(next_permutation(characters, characters + n));

    cout << counter << "\n" << buffer;
}
