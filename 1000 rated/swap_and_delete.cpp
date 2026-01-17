// link - https://codeforces.com/problemset/problem/1913/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        if(s.size()==1) cout << 1 << endl;

        else{
            int zero = 0, one = 0, ans=0;
            for(int i=0; i<s.size(); i++){
                if(s[i] == '0') zero += 1;
                else one += 1;
            }

            if(zero == one) cout << 0 << endl;

            else{
                ans = abs(zero-one);

                int rem_zero = 0, rem_one = 0;
                for(int i=0; i<=zero; i++){
                    if(s[i] == '0') rem_zero += 1;
                    else rem_one += 1;
                }
                ans += max(rem_one,rem_zero)-zero;
                cout << ans << endl;
            }
        }
    }
}

// for (int i = 0; i < n; i++) {
//             if (s[i] == '0') {
//                 if (cnt1 > 0) cnt1--;
//                 else { ans = n - i; break; }
//             } else {
//                 if (cnt0 > 0) cnt0--;
//                 else { ans = n - i; break; }
//             }
//         }