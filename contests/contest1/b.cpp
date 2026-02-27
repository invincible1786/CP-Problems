#include <bits/stdc++.h>
using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            string s;
            cin >> s;
            int ones = 0;
            int zeros = 0;
            int so = -1;
            int eo = -1;
            int flag = 1;
            // edge cases
            for(int i=0; i<n; i++){

                if(flag){
                    if(s[i] == '1'){
                        so = i;
                        flag = 0;
                    }
                }
                if(s[i] == '1') eo = i; 
            }
            if(so >= 2) ones += 1;
            if(eo != so && eo <= n-) ones += 1; 
            if(so == -1 && eo == -1) ones += 1;
            if(n == 1 && s=="0") cout << 1 << endl;
            // general
            else{
            for(int i=0; i<s.size(); i++){

                if(s[i] == '1'){
                    ones += 1;
                    zeros = 0;
                }
                else{
                    zeros += 1;
                }

                if(zeros == 3){
                    ones += 1;
                    zeros = 0;
                }
            }
            cout << ones << endl;
            }
        }
    }