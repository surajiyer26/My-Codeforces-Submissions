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

	int x, k;
	cin >> x >> k;
	map <int,int> m;
	rep (i,1,x) m[i]=0;
	rep (i,0,k) {
		int iden;
		cin >> iden;
		if (iden==1) {
			int a, b;
			cin >> a >> b;
			m[a]=1, m[b]=1;
		}
		else {
			int a;
			cin >> a;
			m[a]=1;
		}
	}
	vi vec;
	rep (i,1,x) if (!m[i]) vec.pb(i);
	sort (all(vec));
	int cnt {};
	int n = vec.size();
	rep (i,0,n-1) if (vec[i+1]-vec[i]==1) ++cnt, ++i;
	cout <<	n-cnt << " " << n;

	return 0;
}