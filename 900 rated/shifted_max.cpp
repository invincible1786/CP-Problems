// link - https://codeforces.com/problemset/problem/2185/C

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        
        set<int> s(arr.begin(), arr.end());

        int max_len = 0;
        int curr_len = 0;
        int prev;
        bool first = true;

        for(int x : s) {
            if(first) {
                curr_len = 1;
                first = false;
            }
            else if(x == prev + 1) {
                curr_len++;
            }
            else {
                curr_len = 1;
            }

        max_len = max(max_len, curr_len);
        prev = x;
    }

        cout << max_len << endl;
    }
    
    return 0;
}