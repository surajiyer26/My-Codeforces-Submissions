#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vii vec (n);
		rep (i,0,n) cin >> vec[i].first;
		rep (i,0,n) cin >> vec[i].second;
		sort (vec.begin(),vec.end());
		repr (i,n-2,-1) vec[i].second=min(vec[i].second,vec[i+1].second);
		int start = 0;
		vi vec2 (n);
		rep (i,0,n) vec2[i]=vec[i].first;
		bool val = true;
		while (k>=0) {
			int j = upper_bound(vec2.begin(),vec2.end(),start+k)-vec2.begin();
			if (j==n) {
				cout << "YES\n";
				val = false;
				break;
			}
			start+=k;
			k-=vec[j].second;
		}
		if (val) cout << "NO\n";
	}

	return 0;
}