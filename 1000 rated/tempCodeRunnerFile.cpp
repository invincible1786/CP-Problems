#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x > a[i]){
                a[i] = x;
            }
        }
        for(int i = n-2; i >= 0; i--){
            a[i] = max(a[i], a[i+1]); // both side can move
        }

        vector<long long> pref(n+1, 0); // solve each query in O(1)
        for(int i=0; i<n; i++){
            pref[i+1] = pref[i] + a[i];
        }

        while(q--){
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l-1] << "\n";
        }
    }
}   