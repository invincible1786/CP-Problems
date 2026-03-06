#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s, k, m;
        cin >> s >> k >> m;
        if(s == k){
            cout << s-(m%s) << endl;
        }
        else if(k > s){
            int x = m%k;
            if(x > s) cout << 0 << endl;
            else cout << s-x << endl;
        }
        else{
            if((m/k)%2 == 0){
                cout << (s-(m%s)) << endl;
            }
            else{
                cout << (k-(m%k)) << endl;
            }
        }
    }
}