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
		set <int> s;
		for (int i {2}; i*i<=n; ++i) {
			if (n%i==0) {
				n/=i;
				s.insert(i);
				break;
			}
		}
		for (int i {2}; i*i<=n; ++i) {
			if (n%i==0 && !s.count(i)) {
				n/=i;
				s.insert(i);
				break;
			}
		}
		s.insert(n);
		if (s.size()<3) 
			cout << "NO\n";
		else {
			cout << "YES\n";
			for (auto c: s) cout << c << " ";
			cout << "\n";
		}
	}

	return 0;
}