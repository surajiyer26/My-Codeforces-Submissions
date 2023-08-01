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
		string s;
		cin >> s;
		int n = s.length();
		vi odd;
		vi even;
		rep (i,0,n) {
			int num = int(s[i])-48;
			if (num%2) odd.pb(num);
			else even.pb(num);
		}
		vi ans;
		int o = odd.size();
		int e = even.size();
		int i {}, j {};
		while (i<o && j<e) {
			if (odd[i]<even[j]) ans.pb(odd[i++]);
			else ans.pb(even[j++]);
		}
		while (i<o) ans.pb(odd[i++]);
		while (j<e) ans.pb(even[j++]);
		for (auto c: ans) cout << c;
		cout << "\n";
	}

	return 0;
}