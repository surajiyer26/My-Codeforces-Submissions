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
		vector <pair<int,int>> ans;
		rep (i,0,n) {
			int temp = ceil(log2(vec[i]));
			temp=pow(2,temp);
			if (temp-vec[i]>0) {
				ans.pb(mp(i+1,temp-vec[i]));
			}
		}
		int x = ans.size();
		cout << x << "\n";
		rep (i,0,x) {
			cout << ans[i].first << " " << ans[i].second << "\n";
		}
	}

	return 0;
}