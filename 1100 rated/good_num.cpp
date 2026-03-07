#include <bits/stdc++.h>
using namespace std;

// primes repeat after 210 !!

bool good(long long x){
    return x % 2 > 0 && x % 3 > 0 && x % 5 > 0 && x % 7 > 0;
}

long long check(long long x){
    long long ans = 0;
    for(long long i = 0; i < x; i++){
        if(good(i)) ans++;
    }
    return ans;
}

long long get(long long r){
    return (r / 210) * check(210) + check(r % 210);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long l, r;
        cin >> l >> r;

        cout << get(r + 1) - get(l) << "\n";
    }
}