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
	int n,k;
	cin >> n >> k;
	int awake[n+1], wa[n+1];
	awake[0] = wa[0] = 0;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		wa[i+1] = wa[i] + a[i];
		awake[i+1] = awake[i];
		if(t) awake[i+1] += a[i];
	}

	int ans = 0;
	for(int i = 0; i < n; i++){
		int t = 0;
		t += awake[i] - awake[0];
		if(i + k < n){
			t += wa[i+k] - wa[i];
			t += awake[n] - awake[i+k];
		}else{
			t += wa[n] - wa[i];
		}
		ans = max(ans, t);
	}

	cout << ans << endl;
}
