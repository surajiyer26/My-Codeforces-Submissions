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
		rep (i,0,n) cin >> vec[i];
		vi ans (n);
		if (n%2) {
			for (int i {}; i<n-3; i+=2) ans[i]=vec[i+1], ans[i+1]=-vec[i];
			vi nz;
			if (vec[n-2]+vec[n-3]!=0) {
				ans[n-3]=-vec[n-1];
				ans[n-2]=-vec[n-1];
				ans[n-1]=vec[n-2]+vec[n-3];
			}
			else if (vec[n-2]+vec[n-1]!=0) {
				ans[n-1]=-vec[n-3];
				ans[n-2]=-vec[n-3];
				ans[n-3]=vec[n-2]+vec[n-1];
			}
			else {
				ans[n-3]=-vec[n-2];
				ans[n-1]=-vec[n-2];
				ans[n-2]=vec[n-1]+vec[n-3];
			}
		}
		else {
			for (int i {}; i<n; i+=2) ans[i]=vec[i+1], ans[i+1]=-vec[i];
		}
		rep (i,0,n) cout << ans[i] << " ";
		cout << "\n";
	}

	return 0;
}