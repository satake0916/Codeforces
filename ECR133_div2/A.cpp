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
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int ans = -1;
		if(n == 1){
			cout << 2 << endl;
			continue;
		}
		int rest = n % 6;
		int sho = n / 6;
		cout << sho * 2 + (rest+2)/3 << endl;
	}
}
