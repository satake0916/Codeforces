#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 710
#endif


void solve(){
	int n,x,y;
	cin >> n >> x >> y;
	if(x > 0 && y > 0){
		cout << -1 << endl;
	}else if(x == 0 && y == 0){
		cout << -1 << endl;
	}else if((n-1)%(x+y) != 0){
		cout << -1 << endl;
	}else{
		int p = 1;
		int t = x+y;
		for(int i = 0; i < (n-1)/t; i++){
			for(int j = 0; j < t; j++){
				cout << p << " ";
			}
			p += t;
			if(i == 0) p++;
		}
		cout << endl;
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
