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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int sum {};
		rep (i,0,n) {
			if (s[i]=='R')
				sum+=n-i-1;
			else
				sum+=i;
		}
		vi temp;
		rep (i,0,n) {
			if (s[i]=='R') {
				if (i>n-i-1)
					temp.pb(i-n+i+1);
			}
			else {
				if (i<n-i-1)
					temp.pb(n-i-1-i);
			}
		}
		sort (temp.rbegin(),temp.rend());
		int cnt {};
		for (auto c: temp) {
			sum+=c;
			cout << sum << " ";
			++cnt;
		}
		while (cnt<n) {
			cout << sum << " ";
			++cnt;
		}
		cout << "\n";
	}

	return 0;
}