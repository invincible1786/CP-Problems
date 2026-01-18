// link - https://codeforces.com/problemset/problem/1831/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> bestA(2*n+1, 0), bestB(2*n+1, 0);

        for (int i = 0; i < n; ) {
            int val = a[i];
            int j = i;
            while (j < n && a[j] == val) j++;
            bestA[val] = max(bestA[val], j - i);
            i = j;
        }

        for (int i = 0; i < n; ) {
            int val = b[i];
            int j = i;
            while (j < n && b[j] == val) j++;
            bestB[val] = max(bestB[val], j - i);
            i = j;
        }

        int ans = 0;
        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, bestA[x] + bestB[x]);
        }

        cout << ans << "\n";
    }
}
