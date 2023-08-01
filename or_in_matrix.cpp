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

	int m, n;
	cin >> m >> n;
	int arr [m][n];
	rep (i,0,m) rep (j,0,n) cin >> arr[i][j];
	int ans [m][n];
	rep (i,0,m) rep (j,0,n) ans[i][j] = 1;
	rep (i,0,m) rep (j,0,n) {
		if (arr[i][j]==0) {
			rep (k,0,m) ans[k][j]=0;
			rep (k,0,n) ans[i][k]=0;
		}
	}
	bool val = true;
	rep (i,0,m) rep (j,0,n) {
		int tempval = false;
		if (arr[i][j]==1) {
			rep (k,0,m) if (ans[k][j]==1) {
				tempval = true;
				break;
			}
			rep (k,0,n) if (ans[i][k]==1) {
				tempval = true;
				break;
			}
			if (!tempval) {
				val = false;
				break;
			}
		}
	}
	if (!val) cout << "NO\n";
	else {
		cout << "YES\n";
		rep (i,0,m) {
			rep (j,0,n) {
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}