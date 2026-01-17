// link - https://codeforces.com/problemset/problem/1537/B

#include <bits/stdc++.h>
using namespace std;

long long dist(long long x1, long long y1, long long x2, long long y2) {
    return llabs(x1 - x2) + llabs(y1 - y2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;

        // finding dist from alternate opposite corners

        long long d1 = dist(i, j, 1, 1) + dist(i, j, n, m);
        long long d2 = dist(i, j, 1, m) + dist(i, j, n, 1);

        if (d1 > d2) {
            cout << 1 << " " << 1 << " " << n << " " << m << "\n";
        } else {
            cout << 1 << " " << m << " " << n << " " << 1 << "\n";
        }
    }

    return 0;
}
