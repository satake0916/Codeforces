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
	vector<ll> a(n+1);
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	cout << n-1 << endl;
	cout << 1 << " " << n << endl;
	
	ll side = ((a[1] + a[n])%2 ? a[1] : a[n]);
	debug(side);
	for(int i = 2; i < n; i++){
		if((side + a[i]) % 2 == 0){
			cout << i << " " << n << endl;
		}else{
			cout << 1 << " " << i << endl;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) solve();
	return 0;
}
