#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

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
		int n, m;
		cin >> n >> m;
		string s, t;
		cin >> s >> t;
		int cnt1 {}, cnt2 {};
		rep (i,0,n-1) if (s[i]==s[i+1]) ++cnt1;
		rep (i,0,m-1) if (t[i]==t[i+1]) ++cnt2;
		if (cnt1&&cnt2) {
			cout << "NO\n";
			continue;
		}
		if (cnt1&&cnt1>1) {
			cout << "NO\n";
			continue;
		}
		if (cnt2&&cnt2>1) {
			cout << "NO\n";
			continue;
		}
		if ((cnt1||cnt2)&&s[n-1]==t[m-1]) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}

	return 0;
}