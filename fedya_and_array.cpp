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
		int n, m;
		cin >> n >> m;
		int z = 2*(n-m);
		cout << z << "\n";
		vi arr;
		rep (i,m,n+1) arr.pb(i);
		repr (i,n-1,m) arr.pb(i);
		for (auto c: arr) cout << c << " ";
		cout << "\n";
	}

	return 0;
}