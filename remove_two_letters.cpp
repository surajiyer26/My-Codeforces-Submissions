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
		int n;
		cin >> n;
		string s;
		cin >> s;
		string s2;
		int cnt {1};
		rep (i,0,n) {
			if (i>0 && s[i]==s[i-1]) ++cnt;
			else if (s[i]!=s[i-1]) cnt=1;
			if (cnt<3) s2+=s[i];
		}
		n = s2.length();
		cnt = n-1;
		rep (i,0,n-2) if (s2[i]==s2[i+2]) --cnt;
		cout << cnt << "\n";
	}

	return 0;
}