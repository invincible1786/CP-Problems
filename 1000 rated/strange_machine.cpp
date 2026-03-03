#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        vector<long long> a(q);
        for (int i = 0; i < q; i++) {
            cin >> a[i];
        }

        int countB = 0;
        for (char c : s) {
            if (c == 'B') countB++;
        }

        for (int i = 0; i < q; i++) {
            long long x = a[i];

            // If no 'B', only subtraction happens
            if (countB == 0) {
                cout << x << "\n";
                continue;
            }

            long long steps = 0;

            while (x > 0) {
                for (char c : s) {
                    if (x == 0) break;

                    steps++;

                    if (c == 'A') {
                        x -= 1;
                    } else { // 'B'
                        x /= 2;
                    }
                }
            }

            cout << steps << "\n";
        }
    }

    return 0;
}