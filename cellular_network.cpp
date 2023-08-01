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

	int n, m;
	cin >> n >> m;
	vi a (n);
	rep (i,0,n) cin >> a[i];
	vi b (m);
	rep (i,0,m) cin >> b[i];
	int i {}, j {}, ans {};
	while (i<n) {
		int temp = abs(a[i]-b[j]);
		while (abs(a[i]-b[j+1])<=temp) temp=abs(a[i]-b[++j]);
		ans = max(temp,ans);
		++i;
	}
	cout << ans;

	return 0;
}