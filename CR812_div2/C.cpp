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

bool sq(int x){
	int gx = sqrt(x);
	return gx*gx == x;
}

void rec(int x){
	if(sq(x)){
		for(int i = x; i >= 0; i--){
			cout << i << " ";
		}
	}else{
		int nxsq = x;
		while(!sq(nxsq)) nxsq++;
		int s = nxsq - x;
		rec(s-1);
		for(int i = s; i <= x; i++){
			cout << nxsq - i << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		rec(n-1);
		cout << endl;
	}
}
