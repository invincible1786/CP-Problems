// link - https://codeforces.com/problemset/problem/2175/A

#include <bits/stdc++.h>
using namespace std;

int num_distinct(vector<int> arr){
    unordered_set<int> st(arr.begin(), arr.end());
    return st.size();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        int dis = num_distinct(arr);

        int ans = INT_MAX;
        
        for(int i=0; i<n; i++){
            int curr = arr[i];
            if(curr == dis){
                ans = dis;
                break;
            }
            if(curr > dis){
                ans = min(ans,curr);
            }
        }

        cout << ans << endl;
    }
}