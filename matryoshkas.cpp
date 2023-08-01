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
		int n;
		cin >> n;
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		sort (vec.begin(), vec.end());
		// 1 2 2 3 3 4
		map <int,int> m;
		rep (i,0,n) {
			if (m[vec[i]-1]==0) {
				m[vec[i]]++;
				m.erase(vec[i]-1);
			}
			else {
				m[vec[i]-1]--;
				if (m[vec[i]-1]==0) m.erase(vec[i]-1);
				m[vec[i]]++;
			}
			// for (auto c: m)
			// 	cout << c.first << " " << c.second << " ";
			// cout << "\n";
		}
		int ans {};
		for (auto c: m) ans += c.second;
		cout << ans << "\n";
	}

	return 0;
}