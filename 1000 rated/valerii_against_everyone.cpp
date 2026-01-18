// link - https://codeforces.com/problemset/problem/1438/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<long long> st;
        bool found = false;
        for(int i=0;i<n;i++){
            long long x;
            cin >> x;
            if(st.count(x)) found = true;
            st.insert(x);
        }
        cout << (found ? "YES\n" : "NO\n");
    }
}
