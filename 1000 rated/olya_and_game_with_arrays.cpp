// link - https://codeforces.com/problemset/problem/1859/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int i = 0;
        vector<vector<int>> check(n);
        while(i<n){
            int len;
            cin >> len;
            while(len--){
                int a;
                cin >> a;
                check[i].push_back(a);
            }
            i += 1;
        }

        for (int i = 0; i < n; i++) {
            sort(check[i].begin(), check[i].end());
        }

        vector<pair<int,int>> p;
        for(int i=0; i<n; i++){
            p.push_back({check[i][0],check[i][1]});
        }

        long long sumB = 0;
        int minB = INT_MAX;
        int minA = INT_MAX;

        for (auto [a, b] : p) {
            sumB += b;
            minB = min(minB, b);
            minA = min(minA, a);
        }

        long long ans = sumB - minB + minA;
        cout << ans << "\n";
    }
}