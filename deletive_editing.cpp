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
		string s, t;
		cin >> s >> t;
		bool ans = true;
		for (int i = s.length()-1; i>=0&&ans; --i) {
			if (t.back()==s[i])
				t.pop_back();
			else if (t.rfind(s[i])!=-1)
				ans = false;
		}
		if (ans && t.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}