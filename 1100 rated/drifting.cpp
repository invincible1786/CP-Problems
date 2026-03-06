// link - https://codeforces.com/problemset/problem/2169/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        bool ok = true;

        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] != '<' && s[i + 1] != '>') {
                cout << -1 << endl;
                ok = false;
                break;
            }
        }

        if(ok) {
            int cnt1 = count(s.begin(), s.end(), '<');
            int cnt2 = count(s.begin(), s.end(), '>');
            cout << s.size() - min(cnt1, cnt2) << endl;
        }
    }

    return 0;
}