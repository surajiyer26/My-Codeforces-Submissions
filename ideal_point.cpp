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
		vector <pair<int,int>> vec;
		rep (i,0,n) {
			int x, y;
			cin >> x >> y;
			if (k>=x&&k<=y) vec.pb(mp(x,y));
		}
		if (vec.size()==0) {
			cout << "NO\n";
			continue;
		}
		int l = 0, r = INT_MAX;
		bool value = true;
		int m = vec.size();
		rep (i,0,m) {
			if (max(l,vec[i].first)<=min(r,vec[i].second)) {
				l = max(l,vec[i].first);
				r = min(r,vec[i].second);
			}
			else value = false;
		}
		if (!value) cout << "NO\n";
		else if (r>l) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}