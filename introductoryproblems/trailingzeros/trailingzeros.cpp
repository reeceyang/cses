#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int zeros = 0;
    int powerOfFive = 5;
    while (powerOfFive <= n) {
        zeros += n / powerOfFive;
        powerOfFive *= 5;
    }

    cout << zeros;
}
