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

	string pi = "314159265358979323846264338327";
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.length();
		int cnt {};
		rep (i,0,n) {
			if (s[i]==pi[i]) cnt++;
			else break;
		}
		cout << cnt << "\n";
	}

	return 0;
}