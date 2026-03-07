// link - https://codeforces.com/problemset/problem/2138/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, x;
        cin >> k >> x;
        stack<int> stk;
        long long c = x;
        long long v = pow(2,k+1)-x;

        while(c != v){
            if(c<v){
                v -= c;
                c *= 2;
                stk.push(1);
            }
            else{
                c -= v;
                v *= 2;
                stk.push(2);
            }
        }
        cout << stk.size() << endl;
        while(!stk.empty()){
            int x = stk.top();
            stk.pop();
            cout << x << " ";
        }
        cout << endl;
    }
}