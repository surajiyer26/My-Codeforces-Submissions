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
		int n, d;
		cin >> n >> d;
		string s;
		cin >> s;
		int j {n};
		rep (i,0,n) {
			if (s[i]-'0'<d) {
				j=i;break;
			}
		}
		rep (i,0,n) {
			if (i==j) cout << d;
			cout << s[i];
		}
		if (j==n) cout << d;
		cout << "\n";
	}

	return 0;
}