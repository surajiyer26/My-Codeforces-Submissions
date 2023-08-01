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

	// 7 12
	// 6 1 1 1 1 1 1 
	// 6 12
	// 7 1 1 1 1 1
	// 4 4 1 1 1 1
	// 6 13
	// not poss
	// 7 21
	// 15 1 1 1 1 1 1
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (n>m) {
			cout << "No\n";
			continue;
		}
		else if (n%2==0 && m%2==1) {
			cout << "No\n";
			continue;
		}
		else {
			cout << "Yes\n";
		}
		if (n%2) {
			cout << m-n+1 << " ";
			rep (i,0,n-1) cout << 1 << " ";
			cout << "\n";
		}
		else {
			rep (i,0,2) cout << (m-n+2)/2 << " ";
			rep (i,0,n-2) cout << 1 << " ";
			cout << "\n";
		}
	}

	return 0;
}