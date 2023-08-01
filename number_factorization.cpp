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
		int n, cnt {}, sum {};
		cin >> n;
		map <int, int> m;
		for (int i {2}; i*i<=n; ++i) {
			cnt = 0;
			while (n%i==0) {
				cnt++;
				n/=i;
				if (!m.count(cnt)) m[cnt]=i;
				else m[cnt]*=i;
			}
		}
		if (n>1) {
			if (!m.count(1)) m[1]=n;
			else m[1]*=n;
		}
		for (auto c: m) sum += c.second;
		cout << sum << "\n";
	}

	return 0;
}