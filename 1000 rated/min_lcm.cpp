// link -> https://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << endl;
            continue;
        }

        long long spf = n;
        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                spf = i;
                break;
            }
        }

        long long a = n / spf;
        long long b = n - a;

        cout << a << " " << b << endl;
    }
    return 0;

}
