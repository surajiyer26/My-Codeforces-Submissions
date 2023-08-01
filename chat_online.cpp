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

	int p, q, l, r;
	cin >> p >> q >> l >> r;
	vii c (p);
	rep (i,0,p) cin >> c[i].first >> c[i].second;
	vii d (q);
	rep (i,0,q) cin >> d[i].first >> d[i].second;
	int cnt {};
	rep (i,l,r+1) {
		bool val = false;
		rep (j,0,q) {
			int one = d[j].first+i, two = d[j].second+i;
			rep (k,0,p) {
				if (max(one,c[k].first)<=min(two,c[k].second)) {
					val = true;
					break;
				}
			}
			if (val) break;
		}
		if (val) ++cnt;
	}
	cout << cnt;

	return 0;
}