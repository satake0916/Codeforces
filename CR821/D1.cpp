#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif


void solve(){
	ll n,x,y;
	cin >> n >> x >> y;
	string a,b;
	cin >> a >> b;
	ll ans = 0;
	
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]) cnt++;
	}
	if(cnt & 1){
		cout << -1 << endl;
		return;
	}

	if(cnt == 2){
		bool ad = false;
		bool pre = false;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				if(pre) ad = true;
				else pre = true;
			}else{
				pre = false;
			}
		}
		if(ad) ans = min(x, y*2);
		else ans = y;
	}else{
		ans = y * (cnt / 2);
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
