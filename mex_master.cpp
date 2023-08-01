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

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi vec (n);
		int zero {}, one {}, x {};
		rep (i,0,n) {
			cin >> vec[i];
			if (vec[i]==0) ++zero;
			if (vec[i]==1) ++one;
			x = max(x,vec[i]);
		}
		if (zero>(n+1)/2) {
			if (one==0||x>1) cout << 1;
			else cout << 2;
		}
		else {
			cout << 0;
		}
		cout << "\n";
	}

	return 0;
}