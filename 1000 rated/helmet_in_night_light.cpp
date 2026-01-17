    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, p;
            cin >> n >> p;
            vector<int> share(n,-1);
            vector<int> cost(n,-1);
            for(int i=0; i<n; i++) cin >> share[i];
            for(int i=0; i<n; i++) cin >> cost[i];

            vector<pair<int,int>> arr;
            for(int i=0; i<n; i++){
                arr.push_back({cost[i],share[i]});
            }

            long long ans = p;
            n = n-1;
            sort(arr.begin(),arr.end());

            for(auto [a,b] : arr){
                if(n==0) break;
                if(a >= p){
                    ans += 1LL*n*p;
                    n = 0;
                }
                else{
    
                    if(n>b){
                        ans += 1LL*a*b;
                        n -= b;
                    }
                    else{
                        ans += 1LL*n*a;
                        n = 0;
                    }
                }
            }
            cout << ans << endl;
        }
    }