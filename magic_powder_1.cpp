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

	int n, k;
	cin >> n >> k;
	vi a (n), b (n);
	rep (i,0,n) cin >> a[i];
	rep (i,0,n) cin >> b[i];
	int l = 0, r = 2000;
	int ans {};
	while (r-l>-1) {
		int mid = l + (r-l)/2;
		int cnt {};
		rep (i,0,n) {
			cnt += (b[i]-mid*a[i]<0)?mid*a[i]-b[i]:0;
		}
		if (cnt<=k) ans = max(ans,mid), l = mid + 1;
		else r = mid -1;
	}
	cout << ans;

	return 0;
}