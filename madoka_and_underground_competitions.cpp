#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, k, r, c;
		cin >> n >> k >> r >> c;
		char arr [n][n];
		--r;
		--c;
		rep (i,0,n) {
			rep (j,0,n) {
				if ((i+j)%k==(r+c)%k)
					arr[i][j]='X';
				else
					arr[i][j]='.';
			}
		}
		rep (i,0,n) {
			rep (j,0,n) {
				cout << arr[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}