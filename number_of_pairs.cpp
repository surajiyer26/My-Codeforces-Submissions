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

int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		sort(all(vec));
		int cnt {};
		// l <= vec[i] + vec[j] <= r
		rep (i,0,n) {
			int ub = upper_bound(all(vec), r-vec[i]) - vec.begin();
			int lb = lower_bound(all(vec), l-vec[i]) - vec.begin();
			cnt += ub-lb;
			// for repeated values
			if (i>=lb && i<ub) --cnt;
		}
		cout << cnt/2 << "\n";
	}

	return 0;
}