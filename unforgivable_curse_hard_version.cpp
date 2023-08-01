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
		int n, k;
		cin >> n >> k;
		string s, t;
		cin >> s >> t;
		if (k>=n) {
			if (s==t) cout << "YES\n";
			else cout << "NO\n";
		}
		else if (2*k<=n) {
			sort(all(s));
			sort(all(t));
			if (s==t) cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			int x = n-k;
			bool val {true};
			rep (i,x,k) if (s[i]!=t[i]) val = false;
			if (val) {
				sort(all(s));
				sort(all(t));
				if (s==t) cout << "YES\n";
				else cout << "NO\n";
			}
			else cout << "NO\n";
		}
	}

	return 0;
}