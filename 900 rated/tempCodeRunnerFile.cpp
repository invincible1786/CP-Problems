    #include <bits/stdc++.h>
    using namespace std;

    int cnt(int ai, bi, a, b){
        if((a-ai)%2 == 0){
            if(b == bi) return (a-ai);
            else return (a-ai-1);
        }
        else{
            if(b == bi) return (a-ai-1);
            else return (a-ai);
        }
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, m;
            cin >> n >> m;
            int ai = 0, bi = 0, sum = 0;
            for(int i=0; i<n; i++){
                int a, b;
                cin >> a >> b;  
                sum += cnt(ai,bi,a,b);
                ai = a;
                bi = b;
            }
            cout << sum << endl;
        }
    }