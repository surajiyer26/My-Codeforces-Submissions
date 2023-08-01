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

int f (int n) {
	int mn, mx;
	mn = mx = n%10;
	n/=10;
	while (n) {
		mn=min(mn,n%10);
		mx=max(mx,n%10);
		n/=10;
	}
	return mx-mn;
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		if (r-l>99) {
			int temp = l;
			rep (i,l,r+1) if (i%100==90) {
				cout << i << "\n";
				break;
			}
		}
		else {
			vii vec;
			rep (i,l,r+1) {
				if (i/10==0) vec.pb(mp(i,0));
				else vec.pb(mp(i,f(i)));
			}
			int ans {vec[0].first}, ansi {vec[0].second};
			for (auto c: vec) if (c.second>ansi) ans = c.first, ansi = c.second;
			cout << ans << "\n";
		}
	}

	return 0;
}