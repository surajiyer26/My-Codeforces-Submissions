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
		int n, m;
		cin >> n >> m;
		int arr [n][m];
		rep (i,0,n) rep (j,0,m) cin >> arr[i][j];
		int cnt {};
		rep (i,0,m) {
			vi vec;
			rep (k,0,n) vec.pb(arr[k][i]);
			sort(all(vec));
			int pre [n] {};
			pre[0]=vec[0];
			rep (k,1,n) pre[k]=pre[k-1]+vec[k];
			rep (k,0,n) cnt += abs(pre[n-1] - pre[k] - (n-k-1)*vec[k]);
		}
		cout << cnt << "\n";
	}

	return 0;
}