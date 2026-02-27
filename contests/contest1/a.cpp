#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        if(n==2) cout << 1 << " " << 2 << endl;
        
        else{
        int start = (n+1)/2;
        int flag = 0;
        if(n%2 == 0) flag = 1;
        for(int i=start; i<=n; i++){
            if(!flag){
                cout << i << " ";
            }
            if(i==n) break;
            cout << n-i << " ";
            flag = 0;
        }
        cout << endl;
        }
    }
}