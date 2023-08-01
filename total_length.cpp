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

	int n, s;
	cin >> n >> s;
	vi a (n);
	rep (i,0,n) cin >> a[i];
	int l {}, r {}, sum {}, ans {};
	while (r<n) {
		sum += a[r];
		while (sum>s) {
			sum -= a[l];
			l++;
		}
		int temp = r-l+1;
		ans += (temp*(temp+1))/2;
		r++;
	}
	cout << ans;

	return 0;
}