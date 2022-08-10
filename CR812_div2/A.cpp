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
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int b;
		cin >> b;
		int mxx = 0, mxy = 0;
		int mnx = 0, mny = 0;
		for(int j = 0; j < b; j++){
			int x,y;
			cin >> x >> y;
			mxy = max(mxy, y);
			mny = min(mny, y);
			mxx = max(mxx, x);
			mnx = min(mnx, x);
		}
		cout << 2 * (abs(mxx) + abs(mnx) + abs(mxy) + abs(mny)) << endl;
	}
}

