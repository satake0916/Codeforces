#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif


void solve(){
	int n;
	cin >> n;
	vector<long long> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	sort(a.begin(), a.end());

	cout << a[n-1] + a[n-2] - a[0] - a[1] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
