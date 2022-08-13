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

const int INF = 1e6;
vector<int> mp(7, INF);

void update(int c, string s){
		if(s ==  "A"){ 
			mp[0] = min(mp[0], c);
			mp[3] = min(mp[3], mp[0]+mp[1]);
			mp[4] = min(mp[4], mp[0]+mp[2]);
		}else if(s ==  "B"){
			mp[1] = min(mp[1], c);
			mp[3] = min(mp[3], mp[0]+mp[1]);
			mp[5] = min(mp[5], mp[2]+mp[1]);
		}else if(s ==  "C"){
			mp[2] = min(mp[2], c);
			mp[4] = min(mp[4], mp[0]+mp[2]);
			mp[5] = min(mp[5], mp[2]+mp[1]);
		}else if(s ==  "AB"){
			mp[3] = min(mp[3], c);
			update(mp[3], "A");
			update(mp[3], "B");
		}else if(s ==  "AC"){
			mp[4] = min(mp[4], c);
			update(mp[4], "A");
			update(mp[4], "C");
		}else if(s ==  "BC"){
			mp[5] = min(mp[5], c);
			update(mp[5], "B");
			update(mp[5], "C");
		}else if(s ==  "ABC"){
			mp[6] = min(mp[6], c);
		}
		mp[6] = min({mp[6], mp[0]+mp[5], mp[1]+mp[4], mp[2]+mp[3]});
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int c;
		string s;
		cin >> c >> s;
		sort( s.begin(), s.end());
		update(c, s);
	}

	cout << (mp[6] == INF ? -1 : mp[6]) << endl;
}
