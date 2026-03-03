#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int z,o,t;
        z = count(s.begin(), s.end(), '0');
        o = count(s.begin(), s.end(), '1');
        t = count(s.begin(), s.end(), '2');

        if(t == n || (z+o+t) == n ){
            string ans(n,'-');
            cout << ans << endl;
        }

        else{
        string ans(n,'+');

        int i=0, j=n-1;

        for(i=0; i<z; i++) ans[i] = '-';
        
        while(o--){
            ans[j] = '-';
            j -= 1;
        }

        while(t--){
            ans[i] = '?';
            ans[j] = '?';
            i += 1;
            j -= 1;
        } 
        cout << ans << endl;
        }      
    }
}