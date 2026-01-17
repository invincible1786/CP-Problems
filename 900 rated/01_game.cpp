// link - https://codeforces.com/problemset/problem/1373/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int one = 0, zero = 0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0') zero += 1;
            else one += 1;
        }
        int ans = min(one,zero);
        if(ans%2) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}