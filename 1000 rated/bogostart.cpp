// link - https://codeforces.com/problemset/problem/1312/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,-1);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for(auto it : arr) cout << it << " ";
        cout << endl;
    }
}