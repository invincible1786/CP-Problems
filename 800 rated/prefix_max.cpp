// link - https://codeforces.com/problemset/problem/2185/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxi = -1;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            maxi = max(maxi,x);
        }
        cout << maxi * n << endl;
    }
}