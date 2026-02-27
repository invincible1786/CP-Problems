// link - https://codeforces.com/problemset/problem/2193/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n,0);
        for(int i=0; i<n; i++) cin >> arr[i];

        int findit = -1, l=-1, r=0, i=0;
        while(i<n){
            if(arr[i] == n-i){
                i += 1;
            }
            else{
                l = i;
                findit = n-i;
                for(int j=i; j<n;j++){
                    if(arr[j] == findit) r = j;
                }
                break;
            }
        }
        if(r) reverse(arr.begin()+l, arr.begin()+r+1);
        for(int i=0; i<n;i++) cout << arr[i] << " ";
        cout << endl;
    }
}