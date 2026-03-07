#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        int sum = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(s < sum){
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
        }
        else if(s - sum >= 2 || s == sum){
            cout << -1;
        }
        else{
            // s - sum == 1
            vector<int> res;

            for(int x : arr) if(x == 0) res.push_back(0);
            for(int x : arr) if(x == 2) res.push_back(2);
            for(int x : arr) if(x == 1) res.push_back(1);

            for(int x : res) cout << x << " ";
        }

        cout << endl;
    }
}