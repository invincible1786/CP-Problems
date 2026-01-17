// link - https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, minm = INT_MAX;
        cin >> n;
        vector<int> arr(n,-1);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            minm = min(arr[i],minm);
        }

        while(1){
            int curr = minm;
            for(int i=0; i<n; i++){
                minm = min(minm,(arr[i]&minm));
            } 
            if(minm == curr) break;
        }
        cout << minm << endl;
    }   
}
