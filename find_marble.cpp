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

	int n, s, t;
	cin >> n >> s >> t;
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	if (s==t) {
		cout << 0;
		return 0;
	}
	bool val [n] {};
	int i = s-1, cnt {1};
	while (!val[i]) {
		if (vec[i]==t) {
			cout << cnt;
			return 0;
		}
		val[i]=1;
		i=vec[i]-1;
		++cnt;
	}
	cout << -1;

	return 0;
}