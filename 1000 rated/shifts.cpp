// link -> https://codeforces.com/problemset/problem/2176/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int init = 0, mid = 0, maxi = -1;
        int f = 0, l = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                f = i;
                break;
            }
            else{
                init++;
            }
        }
        for(int i=n-1;i>=0; i--){
            if(s[i] == '1') {
                l = i;
                break;
            }
            else{
                init++;
            }
        }
        for(int i=f; i<=l; i++){
            if(s[i] == '1'){
                maxi = max(maxi,mid);
                mid = 0;
            }
            else{
                mid += 1; 
            }
        }
        cout << max(maxi,init) << endl;
    }
}   