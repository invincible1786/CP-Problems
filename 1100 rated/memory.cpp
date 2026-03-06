// link - https://codeforces.com/problemset/problem/2185/D

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

    int n, m, h;
    int mini = INT_MAX;
    cin >> n >> m >> h;
    vector<int> a(n+1);

    for(int i=1; i<=n; i++){
        cin >> a[i];
        mini = min(a[i],mini);
    }

    mini = h-mini;
    int changes = 0;
    vector<int> curr = a;
    stack   

    for(int i=1; i<=m; i++){
        
        int b, c;
        cin >> b >> c;
        if(c>mini && changes == 0) continue;
        curr[b] += c;
        changes += 1;
        if(curr[b] > h) {
            curr = a;
            changes = 0;
        }
    }

    for(int i=1; i<=n; i++) cout << curr[i] << " ";
    cout << endl;
    }
}