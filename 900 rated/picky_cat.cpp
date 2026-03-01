    #include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;

            int check, sm = 0, la = 0, limit;
            cin >> check;
            check = abs(check);

            for(int i=1; i<n; i++){
                int x;
                cin >> x;
                x = abs(x);

                if(x>check) la++;
                else sm++;
            }  
            if(n%2 == 0) limit = n/2;
            else limit = (n+1)/2;

            if(limit-sm > 0 || (limit-1 <= la)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }