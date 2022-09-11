#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif

void solve(){
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	ll r = a*d, l = b*c;
	if(r == l){
		cout << 0 << endl;
	}else{
		if(a == 0 || c == 0){
			cout << 1 << endl;
			return;
		}
		if(gcd(r, l) == min(r, l)){
			cout << 1 << endl;
		}else{
			cout << 2 << endl;
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
