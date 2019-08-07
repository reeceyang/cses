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

int n, m;
vector<vector<char>> building;
map<pair<int, int>, bool> floorvisited;

void dfs(int i, int j) {
   if (floorvisited[{i, j}]) {
       return;
   }
   floorvisited[{i, j}] = true;
   if (i > 0 && building[i - 1][j] == '.') {
       if (!floorvisited[{i - 1, j}]) dfs(i - 1, j);
   }
   if (i < n - 1 && building[i + 1][j] == '.') {
       if (!floorvisited[{i + 1, j}]) dfs(i + 1, j);
   }
   if (j > 0 && building[i][j - 1] == '.') {
       if (!floorvisited[{i, j - 1}]) dfs(i, j - 1);
   }
   if (j < m - 1 && building[i][j + 1] == '.') {
       if (!floorvisited[{i, j + 1}]) dfs(i, j + 1);
   }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    REP(i, 0, n - 1) {
        vector<char> row;
        REP(j, 0, m - 1) {
            char square;
            cin >> square;
            row.PB(square);
            if (square == '.') {
                floorvisited[{i, j}] = false;
            }
        }
        building.PB(row);
    }

    int rooms = 0;

    for (auto floor : floorvisited) {
        if (!floor.S) {
            dfs(floor.F.F, floor.F.S);
            rooms++;
        }
    }

    cout << rooms;
}
