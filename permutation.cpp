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
		vector <vector<int>> vec;
		rep (i,0,n) {
			vi temp (n-1);
			rep (j,0,n-1) {
				cin >> temp[j];
			}
			vec.pb(temp);
		}
		map <int,int> m;
		for (auto c: vec) m[c[0]]++;
		int temp {}, times {};
		for (auto c: m) {
			if (c.second>times) {
				times=c.second;
				temp=c.first;
			}
		}
		vi ans;
		ans.pb(temp);
		rep (i,0,n-1) {
			for (auto c: vec) {
				if (find(c.begin(),c.end(),temp)==c.end()) {
					temp = c[i];
					break;
				}
			}
			ans.pb(temp);
		}
		for (auto c: ans) cout << c << " ";
		cout << "\n";
	}

	return 0;
}