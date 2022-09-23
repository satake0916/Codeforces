#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;
  string a, b;
  cin >> a >> b;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i])
      cnt++;
  }
  if (cnt & 1) {
    cout << -1 << endl;
    return;
  }

  if (cnt == 2) {
    bool ad = false;
    bool pre = false;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        if (pre)
          ad = true;
        else
          pre = true;
      } else {
        pre = false;
      }
    }
    if (ad) {
      cout << min(x, y * 2) << endl;
      return;
    }
  }

  ll dp[n + 1][2];
  ll nx[n + 1][2];
  ll full[n + 1][2];
    for (int j = 0; j <= n; j++) {
      for (int k = 0; k < 2; k++) {
        dp[j][k] = numeric_limits<ll>::max() / 2;
		nx[j][k] = numeric_limits<ll>::max() / 2;
	  }
    }

  dp[0][0] = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] == b[i]) {
        // 何もしない
        nx[j][0] = min(nx[j][0], min(dp[j][0], dp[j][1]));
        // 連結で処理
        nx[j][1] = min(nx[j][1], dp[j][1] + x);
      } else {
        // 連結で処理
        if (j > 0)
          nx[j - 1][0] = min(nx[j - 1][0], dp[j][1] + x);
        // 処理しない
        nx[j + 1][1] =
            min(nx[j + 1][1], min(dp[j][0], dp[j][1]));
      }
    }
	for(int s = 0; s <= n; s++){
		for(int k = 0; k < 2; k++){
			dp[s][k] = nx[s][k];
			nx[s][k] = numeric_limits<ll>::max() / 2;
		}
	}
  }

  ll ans = numeric_limits<ll>::max() / 2;
  for (int j = 0; j <= n; j += 2) {
    ll le = min(dp[j][0], dp[j][1]) + j/2 * y;
    ans = min(ans, le);
  }

  cout << ans << endl;
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
