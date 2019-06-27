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

    vector<vector<char>> board;
    REP(i, 1, 8) {
        vector<char> row;
        REP(j, 1, 8) {
            char square;
            cin >> square;
            row.PB(square);
        }
        board.PB(row);
    }

    /* testing input
    REP(i, 0, 7) {
        REP(j, 0, 7) {
            cout << board[i][j];
        }
        cout << "\n";
    }*/
}
