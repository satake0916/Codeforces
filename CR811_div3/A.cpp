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

void solve(){
	int n,h,m;
	cin >> n >> h >> m;
	int cur = h*60 + m;
	vector<int> alarms;
	for(int i = 0; i < n; i++){
		int a,b;
		cin >> a >> b;
		alarms.pb(a*60 + b);
		alarms.pb((a+24)*60 + b);
	}
	sort(alarms.begin(), alarms.end());
	int wake = *lower_bound(alarms.begin(), alarms.end(), cur);
	int sleep = wake - cur;
	cout << sleep/60 << " " << sleep%60 << endl;
}

int main(){
	int T; cin >> T;
	while(T--) solve();
}
