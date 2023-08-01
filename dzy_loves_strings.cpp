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

	string s;
	cin >> s;
	int n = s.length();
	int k;
	cin >> k;
	map <char, int> m;
	rep (i,0,26) cin >> m[char(97+i)];
	int ans {};
	rep (i,0,n) ans += (i+1)*m[char(s[i])];
	int cnt {INT_MIN};
	for (auto c: m) cnt = max(cnt, c.second);
	rep (i,n+1,n+k+1) ans += i*cnt;
	cout << ans;

	return 0;
}