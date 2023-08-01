#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }
int inv (int a, int m) { return mexp(a,m-2,m); }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, d;
	cin >> n >> m >> d;
	vi vec;
	rep (i,0,n) {
		rep (i,0,m) {
			int x;
			cin >> x;
			vec.pb(x);
		}
	}
	int cnt {vec[0]%d};
	bool val = true;
	rep (i,0,n*m) if (vec[i]%d!=cnt) val = false;
	if (!val) {
		cout << -1;
		return 0;
	}
	sort(all(vec));
	cnt = 0;
	rep (i,0,n*m) cnt += abs(vec[i]-vec[(n*m)/2])/d;
	cout << cnt;

	return 0;
}