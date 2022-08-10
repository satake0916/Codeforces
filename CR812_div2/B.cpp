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
		int n;
		cin >> n;
		int a[n];
		for(int j = 0; j < n; j++){
			cin >> a[j];
		}
		int bigger = 0, smaller = n-1;
		for(; bigger+1 < n; bigger++){
			if(a[bigger+1] >= a[bigger]) continue;
			else break;
		}
		for(; smaller-1 >= 0; smaller--){
			if(a[smaller-1] >= a[smaller]) continue;
			else break;
		}
		cout << (bigger >= smaller ? "Yes" : "No") << endl;
	}
}
