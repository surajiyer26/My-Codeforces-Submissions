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

	int n;
	cin >> n;
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	rep (i,1,n) vec[i]+=vec[i-1];
	if (vec[n-1]%3) {
		cout << 0;
		return 0;
	}
	int s = vec[n-1]/3;
	int ss = s+s;
	int ans {}, cnt {};
	rep (i,0,n-1) {
		if (vec[i]==ss) ans+=cnt;
		if (vec[i]==s) ++cnt;
	}
	cout << ans;

	return 0;
}