// link - https://codeforces.com/problemset/problem/1471/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n, x;
        cin >> n >> x;
        long long minm = 0, maxm = 0;
        vector<double>arr(n,-1);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            minm += arr[i];
            maxm += (arr[i]+x-1)/x;
        }
        cout << (minm+x-1)/x << " " << maxm << endl;
    }
}