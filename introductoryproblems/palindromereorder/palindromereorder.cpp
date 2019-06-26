#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();

    map<char, int> characters;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        characters[c];
        characters[c]++;
    }

    /* testing input
    for (auto x : characters) {
        cout << x.first << " " << x.second << "\n";
    }*/

    int numberOfOdds = 0;
    string palindrome;
    if (n % 2 == 0) {
        palindrome = "";
    } else {
        palindrome = " ";
    }
    for (auto x : characters) {
        if (x.second % 2 != 0) {
            numberOfOdds++;
            if (numberOfOdds > 1) {
                // if more than one letter with an odd count,
                // break out of the for loop
                cout << "NO SOLUTION";
                break;
            }
            // insert the character in the middle space
            palindrome[palindrome.size() / 2] = x.first;
            characters[x.first]--;
        }
        string group (x.second / 2, x.first);
        //cout << group << "\n";
        palindrome = group + palindrome + group;
    }
    if (numberOfOdds <= 1) {
        cout << palindrome;
    }
}
