// link - https://codeforces.com/problemset/problem/2179/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        long long S = 0;
        for(int i = 0; i < n-1; i++)
            S += abs(a[i] - a[i+1]);

        long long maxReduction = 0;

        maxReduction = max(maxReduction, abs(a[0] - a[1]));
        maxReduction = max(maxReduction, abs(a[n-1] - a[n-2]));

        for(int i = 1; i < n-1; i++) {
            long long reduction =
                abs(a[i-1] - a[i]) +
                abs(a[i] - a[i+1]) -
                abs(a[i-1] - a[i+1]);

            maxReduction = max(maxReduction, reduction);
        }

        cout << S - maxReduction << "\n";
    }
}