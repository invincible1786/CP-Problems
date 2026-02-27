// link - https://codeforces.com/problemset/problem/2173/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int curr = 0, ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                if(curr == 0) ans += 1;
                else curr -= 1;
            }
            else if(s[i] == '1') curr = k;
        }
        cout << ans << endl;
    }
}