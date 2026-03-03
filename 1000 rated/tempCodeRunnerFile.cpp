#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for(int i=0; i<q; i++){
            int x, j=0, t=0;
            cin >> x;
            while(x!=0){
                if(s[j%q] == 'A'){
                    x -= 1;
                }
                else{
                    x = floor(x/2);
                }
                t += 1;
                j += 1;
            }
            cout << t << endl;
        }
    }
}