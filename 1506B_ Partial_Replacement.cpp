#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int res = 1;
  int i = s.find_first_of('*');
  while (true) {
    int j = min(n - 1, i + k);
    for (; i < j && s[j] == '.'; j--) {}
    if (i == j) {
      break;
    }
    res++;
    i = j;
  }
  cout << res << "\n";
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
