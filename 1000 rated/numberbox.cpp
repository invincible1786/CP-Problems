// link - https://codeforces.com/problemset/problem/1447/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int sum = 0, minm = INT_MAX, cnt=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int x;
                cin >> x;
                if(x<0) cnt += 1;
                minm = min(minm,abs(x));
                sum += abs(x);
            }
        }
        if(!minm || !(cnt%2)) cout << sum << endl;
        else cout << sum - 2*minm << endl;
    }
}
