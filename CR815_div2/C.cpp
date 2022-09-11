#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> mat(n);
  for (int i = 0; i < n; i++)
    cin >> mat[i];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == '1')
        sum++;
    }
  }

  int mn = 4;
  for (int i = 0; i <= n - 2; i++) {
    for (int ii = 0; ii <= m - 2; ii++) {
      int t = 0;
      for (int j = 0; j <= 1; j++) {
        for (int k = 0; k <= 1; k++) {
          if (mat[i + j][ii + k] == '1')
            t++;
        }
      }
      mn = min(mn, t);
    }
  }
  if (mn == 0 || mn == 1 || mn == 2)
    cout << sum << endl;
  else if (mn == 3)
    cout << sum - 1 << endl;
  else if (mn == 4)
    cout << sum - 2 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}
