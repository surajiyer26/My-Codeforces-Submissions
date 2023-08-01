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
		string s;
		cin >> s;
		vi v1, v2;
		rep (i,0,n) v1.pb(s[i++]);
		rep (i,1,n) v2.pb(s[i++]); 
		bool val = true;
		for (auto c: v1) if (find(all(v2),c)!=v2.end()) val = false;
		for (auto c: v2) if (find(all(v1),c)!=v1.end()) val = false;
		if (val) cout << "YES\n"; else cout << "NO\n";
	}

	return 0;
}