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
		string s;
		cin >> s;
		map <char, int> m;
		rep (i,0,4) m[s[i]]++;
		if (m.size()==4) cout << 4;
		else if (m.size()==3) cout << 4;
		else if (m.size()==2) {
			bool val = false;
			for (auto c: m) if (c.second==3) val = true;
			if (val) cout << 6;
			else cout << 4;
		}
		else cout << -1;
		cout << "\n";
	}

	return 0;
}