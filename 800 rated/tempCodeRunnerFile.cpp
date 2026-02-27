#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int curr = 1, i=0;
        int maxi = max(a,b);
        int mini = min(a,b);
        while(maxi>0 && mini>0){
            if(i%2){
                maxi -= curr;
            }
            else{
                mini -= curr;
            }
            curr *= 2;
            if(maxi>=0 && mini>= 0) i += 1;
        }
        int ans = i+1;

        int maxi = max(a,b);
        int mini = min(a,b);
        int i=0, curr = 1;
        while(maxi>0 && mini>0){
            if(i%2){
                mini -= curr;
            }
            else{
                maxi -= curr;
            }
            curr *= 2;
            if(maxi>=0 && mini>= 0) i += 1;
        }
        ans = max(i+1,ans);
        cout << ans+1 << endl;
    }

    
}