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
		int n, m;
		cin >> n >> m;
		multiset <int> ms;
		rep (i,0,n) {
			int x;
			cin >> x;
			ms.insert(x);
		}
		rep (i,0,m) {
			int x;
			cin >> x;
			ms.erase(ms.find(*ms.begin()));
			ms.insert(x);
		}
		int ans {};
		for (auto c: ms) {
			ans += c;
		}
		cout << ans << "\n";
	}

	return 0;
}