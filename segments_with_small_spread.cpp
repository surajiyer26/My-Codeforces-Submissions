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

	int n, k;
	cin >> n >> k;
	vi a (n);
	rep (i,0,n) cin >> a[i];
	multiset <int> ms;
	int l {}, r {}, ans {};
	ms.insert(a[0]);
	while (r<n) {
		if (*(--ms.end())-*(ms.begin())>k) {
			ms.erase(ms.find(a[l]));
			l++;
		}
		else  {
			ans += r-l+1;
			++r;
			if (r<n)
				ms.insert(a[r]);
		}
	}
	cout << ans;

	return 0;
}