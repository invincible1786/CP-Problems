// link -> https://codeforces.com/problemset/problem/2137/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long b, a;
        cin >> b >> a;

        long long sol = -1;

        if ((a + b) % 2 == 0)
            sol = a + b;

        if (a % 2 == 1 && b % 2 == 1)
            sol = max(sol, a * b + 1);
        else if (a % 2 == 0 && (a % 4 == 0 || b % 2 == 0))
            sol = max(sol, 2 + (a * b) / 2);

        cout << sol << "\n";
    }

    return 0;
}