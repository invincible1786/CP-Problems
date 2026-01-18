// link - https://codeforces.com/problemset/problem/1474/B

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<2) return false; // missed 1
    for(int i=2; i*i <= x; i++){ // missed =
        if(x%i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        int i = d+1; // have to start from d+1

        int p1 = 1 + d;
        while (!isPrime(p1)) p1++; // atleast d difference b/w divisors

        int p2 = p1 + d;
        while (!isPrime(p2)) p2++;

        cout << 1LL * p1 * p2 << endl;
    }
}
