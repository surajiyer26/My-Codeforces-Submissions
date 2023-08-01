#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
#define M 1000000007

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, r, b;
		cin >> n >> r >> b;
		int times {r/(b+1)};
		int left {r%(b+1)};
		++b;
		rep (i,0,left) {
			rep (i,0,times+1) cout << 'R';
			cout << 'B';
			b--;
		}
		while (b) {
			rep (i,0,times) cout << 'R';
			if (b!=1) cout << 'B';
			b--;
		}
		cout << "\n";
	}

	return 0;
}