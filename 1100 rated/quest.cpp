// link -> https://codeforces.com/problemset/problem/1914/C

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n,-1);
        vector<int> b(n,-1);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        int sum = 0, ans = INT_MIN, b_max = INT_MIN;
        for(int i=0; i<k; i++){
            b_max = max(b[i],b_max);
            if(i == n) break;
            sum += a[i];
            ans = max(ans,sum + (k-i-1)*b_max);
        }
        cout << ans << endl;
    }
}