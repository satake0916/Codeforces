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

const int MAX = 2 * 1e5;
int n,k;
string s;
int ava[26];
ll dp[MAX][2];

ll f(int l){
	if(l == n-1) return dp[n-1][0] = dp[n-1][1] = (ava[s[n-1] - 'a']);
	f(l+1);
	dp[l][0] = dp[l+1][0];
	if(ava[s[l] - 'a']){
		dp[l][1] = dp[l+1][1] + 1;
		dp[l][0] += dp[l][1];
	}
	return dp[l][0];
}

int main(){
	cin >> n >> k >> s;
	for(int i = 0; i < k; i++){
		char c;
		cin >> c;
		ava[c - 'a'] = 1;
	}

	ll ans = f(0);
	cout << ans << endl;
}
