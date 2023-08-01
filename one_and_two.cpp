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
		int n;
		cin >> n;
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		int cnt {};
		rep (i,0,n) {
			if (vec[i]==2) ++cnt;
		}
		int temp {};
		int val {};
		rep (i,0,n) {
			if (vec[i]==2) {
				++temp;
				--cnt;
			}
			if (temp==cnt) {
				val = i+1;
				break;
			}
		}
		if (val) cout << val << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}