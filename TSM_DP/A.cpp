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
	int n;
	cin >> n;
	if(n%2 == 1){
		cout << 0 << endl;
	}else{
		cout << (1 << (n/2)) << endl;
	}
}

int main(){
	solve();
}
