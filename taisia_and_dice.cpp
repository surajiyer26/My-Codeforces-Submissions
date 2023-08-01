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
		int n, s, r;
		cin >> n >> s >> r;
		int maxdie = s-r;
		cout << maxdie << " ";
		n--;
		int di {r/n};
		int re {r%n};
		rep (i,0,re) cout << di+1 << " ";
		rep (i,0,n-re) cout << di << " ";
		cout << "\n";
	}

	return 0;
}