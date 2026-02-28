    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, x, y;
            cin >> n >> x >> y;
            x = abs(x);
            y = abs(y);

            string s;
            cin >> s;
            int b = 0, a = 0;
            for(int i=0; i<s.size(); i++){
                if(s[i] == '4') a++;
                else b++; 
            }

            if((a+b) >= max(x,y) && (a+2*b) >= x+y) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }