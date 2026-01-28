// link -> https://codeforces.com/problemset/problem/1511/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (q--) {
        int x;
        cin >> x;
        int p = 0;
        while (a[p] != x) {
            p++;
        }

        cout << p + 1 << " ";

        // rotate the array -> gotta look at just the beginning first few different colors
        int temp = a[p];
        for (int i = p; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    
    }
}