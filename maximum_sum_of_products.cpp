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

	int n;
	cin >> n;
	vi a (n), b (n);
	rep (i,0,n) cin >> a[i];
	rep (i,0,n) cin >> b[i];
	vi pre (n);
	pre[0] = a[0]*b[0];
	rep (i,1,n) pre[i] = pre[i-1]+a[i]*b[i];
	int ans {pre[n-1]};
	rep (i,0,n) {
		int temp = a[i]*b[i];
		for (int l = i-1, r = i+1; l>-1&&r<n; --l, ++r) {
			temp += a[l]*b[r] + a[r]*b[l];
			ans = max(ans,temp+((l>0)?pre[l-1]:0)+pre[n-1]-pre[r]);
		}
	}
	rep (i,0,n) {
		int temp = 0;
		for (int l = i, r = i+1; l>-1&&r<n; --l, ++r) {
			temp += a[l]*b[r] + a[r]*b[l];
			ans = max(ans,temp+((l>0)?pre[l-1]:0)+pre[n-1]-pre[r]);
		}
	}
	cout << ans;

	return 0;
}