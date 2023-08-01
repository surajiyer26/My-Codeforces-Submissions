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
	int arr [n][2];
	rep (i,0,n) cin >> arr[i][0] >> arr[i][1];
	map <int, int> m1, m2;
	rep (i,0,n) m1[arr[i][0]]++, m2[arr[i][1]]++;
	int ans [n][2];
	rep (i,0,n) rep (j,0,2) ans[i][j]=0;
	rep (i,0,n) ans[i][0]+=n-1+m1[arr[i][1]], ans[i][1]+=n-1-m1[arr[i][1]];
	rep (i,0,n) {
		rep (j,0,2) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}