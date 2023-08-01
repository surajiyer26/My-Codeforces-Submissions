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

int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int o;
		cin >> o;
		vector<vector<int>>vec;
		map <int,int> m;
		rep (j,0,o) {
			int n;
			cin >> n;
			vi temp (n);
			rep (i,0,n) {
				cin >> temp[i]; 
				m[temp[i]]++;
			}
			vec.pb(temp);
		}
		vi ans;
		bool solved {true};
		rep (j,0,o) {
			bool temp {false};
			for (auto c: vec[j]) m[c]--;
			for (auto c: vec[j]) if (m[c]==0) {
				temp = true;
				ans.pb(c);
				break;
			}
			if (!temp) solved = false;
		}
		if (solved) for (auto c: ans) cout << c << " ";
		else cout << -1;
		cout << "\n";
	}

	return 0;
}