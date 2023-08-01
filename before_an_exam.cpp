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

	int d, s;
	cin >> d >> s;
	int mn {}, mx {};
	vii vec (d);
	rep (i,0,d) {
		cin >> vec[i].first >> vec[i].second;
		mn+=vec[i].first;
		mx+=vec[i].second;
	}
	if (s<mn||s>mx) {
		cout << "NO";
		return 0;
	}
	s-=mn;
	vi ans (d);
	rep (i,0,d) {
		if (s) {
			ans[i]=min(vec[i].second-vec[i].first,s)+vec[i].first;
			s-=min(vec[i].second-vec[i].first,s);
		}
		else ans[i]=vec[i].first;
	}
	cout << "YES\n";
	rep (i,0,d) cout << ans[i] << " ";

	return 0;
}