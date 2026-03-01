#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n,0);
        int i=k-1;
        int curr = 1;
        while(i<n){
            ans[i] = curr;
            i += k;
            curr += 1;
        }
        for(int j=0; j<n; j++){
            if(ans[j] == 0){ 
            ans[j] = curr;
            curr += 1;
            }
        }
        
        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
}