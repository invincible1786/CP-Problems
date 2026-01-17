// link - https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        int flag = 1;
        cin >> n;
        vector<int> arr(n,-1);
        map<int,int,greater<int>> mpp;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            mpp[arr[i]] = i; // make it sort in decreasing order
        }

        int i=0, j=n-1;
        for (auto it = mpp.begin(); it != mpp.end(); ) {
            if (it->second == i) {
                it = mpp.erase(it);
                i++;
            }
            else if (it->second == j) {
                it = mpp.erase(it);
                j--;
            }
            else {
                cout << "YES\n";
                cout << it->second << " " << it->second + 1 << " " << it->second + 2 << "\n";
                flag = 0;
                break;
            }
        }

        if(flag) cout << "NO" << endl; 
    }  
}