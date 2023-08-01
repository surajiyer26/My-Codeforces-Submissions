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
		vi a (n);
		rep (i,0,n) cin >> a[i];
		int cnt {};
		sort(a.begin(),a.end());
		rep (i,0,n) {
			if (i>=a[i] && (i==n-1 || i+1<a[i+1]))
				++cnt;
		}
		if (a[0]!=0) ++cnt;
		cout << cnt << "\n";
	}

	return 0;
}