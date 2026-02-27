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

            // edge cases
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
                    i -= 1;
                }
            }
            cout << ones << endl;
            }
        }
    }