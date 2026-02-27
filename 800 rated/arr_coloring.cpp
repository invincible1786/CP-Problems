// link - https://codeforces.com/problemset/problem/2191/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;  // store original index
        }
        
        sort(a.begin(), a.end());
        
        bool ok = true;
        for(int i = 1; i < n; i++){
            if((a[i].second % 2) == (a[i-1].second % 2)){
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES\n" : "NO\n");
    }
}