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
		vi vec (n);
		rep (i,0,n) cin >> vec[i];
		sort (vec.begin(), vec.end());
		int rec {1}, temp {1};
		rep (i,0,n-1) {
			if (vec[i]==vec[i+1]) {
				++temp;
				if (i==n-2)
					rec = max (rec,temp);
			}
			else {
				rec = max (rec,temp);
				temp = 1;
			}
		}
		int ans {};
		while (rec<n) {
			++ans;
			if (2*rec<n) {
				ans += rec;
				rec += rec;
			}
			else {
				ans += n-rec;
				rec = n;
			}
		}
		cout << ans << "\n";
	}

	return 0;
}