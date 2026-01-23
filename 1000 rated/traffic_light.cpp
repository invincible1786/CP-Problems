// link -> https://codeforces.com/problemset/problem/1744/C

#include <bits.stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        
        if(c=='g') cout << 0 << endl;
        else{
            int ans = INT_MIN;
            int curr = 0;
            s += s;
            for(int i=0; i<s.size(); i++){
                if(s[i] == 'g') ans = max(ans,curr);
                if(s[i] == c) curr = 0;
                
            }
            
        }
    }
}