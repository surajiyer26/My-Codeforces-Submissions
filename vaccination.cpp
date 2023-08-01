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
		int n, k, d, w;
		cin >> n >> k >> d >> w;
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		int cnt {};
		rep (i,0,n) {
			int cur = i;
			while (cur<n && vec[cur]<=vec[i]+w && cur-i<=k) ++cur;
			cnt++;
			if (cur-i>k) {
				i+=k-1;
			}
			else {
				int rem = k-cur+i;
				while (cur<n && rem>0 && vec[cur]<=vec[i]+w+d) rem--, cur++;
				i=--cur;
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}