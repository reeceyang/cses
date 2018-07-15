#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    char previous = s[0];
    int maxRep = 1;
    int currentRep = 1;
    for (int i = 1; i < s.length(); i++) {
        char current = s[i];
        if (current == previous) {
            currentRep++;
            if (i == s.length() - 1) {
                if (currentRep > maxRep) {
                    maxRep = currentRep;
                }
            }
        } else {
            if (currentRep > maxRep) {
                maxRep = currentRep;
            }
            currentRep = 1;
        }
        previous = current;
    }

    cout << maxRep;
}
