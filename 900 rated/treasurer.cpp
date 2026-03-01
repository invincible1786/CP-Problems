// link -> https://codeforces.com/problemset/problem/2072/B

#include <bits/stdc++.h>
using namespace std;

// the first test case misleads
// simply put all the under in the center and equally distribute the dashes on both the sides
// then use permutation and combination for the same

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int64_t dash = count(s.begin(), s.end(), '-');
  int64_t under = n - dash;
  int64_t ans = (dash / 2) * (dash - dash / 2) * under;
  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t != 0) {
    solve();
  }
  return 0;
}