// link -> https://codeforces.com/problemset/problem/2188/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        
        int n, ans = 0, zeroes = 0;
        bool flag = true;
        string s;
        cin >> n >> s;
        if(n==1 && s[0]=='0') cout << 1 << endl;
        else{
            for(int i=0; i<s.size(); i++){

            if(s[i] == '0'){
                zeroes += 1;
            }

            else{
                if(flag && zeroes == 2) ans += 1;
                else if(zeroes%2 == 0){
                    ans += (zeroes-1)/2;
                }
                else{
                    ans += zeroes/2;
                }
                zeroes = 0;
                ans += 1;
                flag = false;
            }
        }

        if(zeroes%2 == 1 || zeroes == 2){
            ans += zeroes/2;
        }
        else{
            ans += (zeroes-1)/2;
        }

        cout << ans << endl;

        }
    }
}   