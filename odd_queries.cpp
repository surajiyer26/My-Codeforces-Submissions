#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
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
		int n, q;
		cin >> n >> q;
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		rep (i,1,n) vec[i]+=vec[i-1];
		while (q--) {
			int l, r, k;
			cin >> l >> r >> k;
			int sum = ((l>1)?vec[l-2]:0)+(r-l+1)*k+(vec[n-1]-vec[r-1]);
			if (sum%2) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}