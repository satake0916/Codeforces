#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
#include<array>
#include<chrono>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

int main(){
	int n;
	cin >> n;
	ll f[n+1][8];
	const ll inf = 1e17;

	for(ll i = 0; i <= n; i++){
		for(ll j = 0; j < 8; j++){
			f[i][j] = inf;
		}
	}

	f[0][0] = 0;
	

	for(ll i = 0; i < n; i++){
		ll cost;
		string s;
		cin >> cost >> s;
		int string_mask = 0;
		for(int pos = 0; pos < 3; pos++){
			char c = 'C' - pos;
			bool have = 0;
			for(char d: s){
				if(c == d){
					have = 1;
				}
			}
			if(have){
				string_mask += (1 << pos);
			}
		}

		for(ll mask = 0; mask < 8; mask++){
			f[i+1][mask] = min(f[i+1][mask], f[i][mask]);
			f[i+1][mask | string_mask] = min(f[i+1][mask | string_mask], f[i][mask] + cost);
		}
	}

	ll ans = f[n][7];
	if(ans == inf) ans = -1;
	cout << ans << endl;
}
