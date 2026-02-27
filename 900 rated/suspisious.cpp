#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        string r;
        cin >> r;

        int n = r.size();
        int ans = 0;

        if (r[0] != 's'){
            ans += 1;
            r[0] = 's';
        }

        if (r[n - 1] != 's'){
            ans += 1;
            r[n-1] = 's';
        }
        int count_u = 0;
        for (int i = 0; i < n; i++) {
            if (r[i] == 'u') {
                count_u++;
            } else {
                ans += count_u / 2;
                count_u = 0;
            }
        }
        ans += count_u / 2;

        cout << ans << "\n";
    }

    return 0;
}