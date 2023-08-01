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
		int n, k;
		cin >> n >> k;
		vi vec;
		int i {1}, j {n};
		while (vec.size()<n) {
			vec.pb(j--);
			if (vec.size()>=n) break;
			vec.pb(i++);
		}
		for (auto c: vec)
			cout << c << " ";
		cout << "\n";
	}

	return 0;
}