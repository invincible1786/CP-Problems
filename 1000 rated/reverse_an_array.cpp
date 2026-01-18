// link - https://codeforces.com/problemset/problem/1155/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, flag = 1;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.size()-1; i++){
        if((s[i]-'a')>(s[i+1]-'a')){
            cout << "YES\n";
            cout << i+1 << " " << i+2 << endl;
            flag = 0;
            break;
        }
    }
    if(flag) cout << "NO\n";
}