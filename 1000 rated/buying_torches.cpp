// link - https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long need = k * y + k - 1;      // total sticks for coal + torch, we have 1

        long long stick_trades = (need + (x - 2)) / (x - 1);
        cout << stick_trades + k << "\n";
    }
}
