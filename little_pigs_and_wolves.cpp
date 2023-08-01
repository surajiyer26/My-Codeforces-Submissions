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

	int n, m;
	cin >> n >> m;
	char arr [n][m];
	rep (i,0,n) rep (j,0,m) cin >> arr[i][j];
	int cnt {};
	rep (i,0,n) rep (j,0,m) {
		if (arr[i][j]=='W') {
			if (i-1>-1&&arr[i-1][j]=='P') ++cnt, arr[i-1][j]='.';
			else if (i+1<n&&arr[i+1][j]=='P') ++cnt, arr[i+1][j]='.';
			else if (j-1>-1&&arr[i][j-1]=='P') ++cnt, arr[i][j-1]='.';
			else if (j+1<m&&arr[i][j+1]=='P') ++cnt, arr[i][j+1]='.';
		}
	}
	cout << cnt;

	return 0;
}