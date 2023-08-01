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
	rep (i,0,n) {
		cin >> vec[i];
	}
	vi temp = vec;
	sort(all(temp));
	vii ans;
	rep (i,0,n) {
		if (vec[i]!=temp[i]) {
			ans.pb(mp(i,find(vec.begin()+i,vec.end(),temp[i])-vec.begin()));
			swap (vec[i],vec[find(vec.begin()+i,vec.end(),temp[i])-vec.begin()]);
		}
	}
	cout << ans.size() << "\n";
	for (auto c: ans) cout << c.first << " " << c.second << "\n";

	return 0;
}