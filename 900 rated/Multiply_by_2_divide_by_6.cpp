// problem link - https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;
 
int cntsteps(int n){
 
        int steps=0;
 
        while(n != 1)
        {
            if(n == 1) return steps;
            else if(n%6 == 0){
                    n = n/6;
                    steps += 1;
            }
            else if(n%3 == 0){
                n = n*2;
                n = n/6;
                steps += 2;
            } 
            else return -1; 
        }
        return steps;
    }
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << cntsteps(n) << endl;    
    }
}