// link -> https://codeforces.com/problemset/problem/1618/C

#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,-1);
        for(int i=0; i<n; i++) cin >> arr[i];

        if(n == 1) cout << "YES" << endl;

        else{
        int lft = 0, rt = n-1;
        while(arr[lft] == arr[rt]){
            lft += 1;
            rt -= 1;
        }

        if(lft > rt) cout << "Yes" << endl;

        else{
        bool flg = (check(lft,rt,arr,arr[lft]) || check(lft,rt,arr,arr[rt]));

        if(flg) cout << "Yes" << endl;
        else cout << "No" << endl;
            }
        } 
    }
}