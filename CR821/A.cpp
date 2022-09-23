#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif


void solve(){
	int n,k;
	cin >> n >> k;
	vector<long long> a(n);
	vector<vector<ll>> mod(k);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mod[i%k].push_back(a[i]);
	}
	for(int i = 0; i < k; i++){
		sort(mod[i].begin(), mod[i].end(), greater<ll>());
	}

	ll ans = 0;
	for(int s = 0; s + k <= n; s++){
		vector<int> indices(k, 0);
		ll temp = 0;
		for(int i = 0; i < k; i++){
			int t = i%k;
			temp += mod[t][indices[t]];
			indices[t]++;
		}
		ans = max(ans, temp);
	}

	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
