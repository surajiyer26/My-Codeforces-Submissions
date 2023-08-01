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
	vi b (m);
	rep (i,0,n) cin >> a [i];
	rep (j,0,m) cin >> b [j];
	int i {}, j {}, ans {};
	while (i<n&&j<m) {
		if (a[i]==b[j]) {
			int ii = i+1;
			while (a[ii]==a[i] && ii<n) ++ii;
			int jj = j+1;
			while (b[jj]==b[j] && jj<m) ++jj;
			ans += (ii-i)*(jj-j);
			i = ii;
			j = jj;
		}
		else if (a[i]>b[j]) {
			j++;
		}
		else {
			i++;
		}
	}
	cout << ans;

	return 0;
}