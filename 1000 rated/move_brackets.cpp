// link - https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int lft = 0, rt = 0, ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(') rt += 1;
            else lft += 1;
            if(lft > rt){
                ans += 1;
                lft -= 1;
            }
        }
        cout << ans << endl;
    }    
}