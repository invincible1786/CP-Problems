// link -> https://codeforces.com/problemset/problem/1899/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            long long mn = LLONG_MAX, mx = LLONG_MIN;
            long long sum = 0;

            for (int i = 0; i < n; i++) {
                sum += a[i];
                if ((i + 1) % k == 0) {
                    mn = min(mn, sum);
                    mx = max(mx, sum);
                    sum = 0;
                }
            }

            ans = max(ans, mx - mn);
        }

        cout << ans << endl;
    }
}
