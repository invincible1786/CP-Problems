// link -> https://codeforces.com/problemset/problem/1891/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int mn = 31;

        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;

            if (x >= mn) continue;
            mn = x;

            long long check = 1LL << x;
            long long add = 1LL << (x - 1);

            for (int j = 0; j < n; j++) {
                if (a[j] % check == 0) {
                    a[j] += add;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
