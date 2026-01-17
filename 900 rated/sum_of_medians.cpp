// link - https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int total = n * k;
        vector<long long> arr(total);
        for (int i = 0; i < total; i++) cin >> arr[i];

        int mid = (n + 1) / 2;          
        int step = n - mid + 1;        

        long long sum = 0;
        int idx = total;                       

        for (int i = 0; i < k; i++) {
            idx -= step;
            sum += arr[idx];
        }

        cout << sum << "\n";
    }
    return 0;
}
