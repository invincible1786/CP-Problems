// link - https://codeforces.com/problemset/problem/1485/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int a, b;
        cin >> a >> b;

        int minm = INT_MAX, step, i=-1;
        int nb;

        while(1){

            i += 1;
            step = i;
            int x = a;
            nb = b+i;
            if(nb == 1) continue;

            while(x>0){
                
                x = x/nb;
                step += 1;

            }
        
            minm = min(step,minm);
            if(i == 30) break;

        }

    cout << minm << endl;

    }
}