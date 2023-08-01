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
		if (n%2==0) {
			cout << -1 << "\n";
			continue;
		}
		bool val = true;
		vi vec;
		rep (i,0,40) {
			if (((n-1)/2)%2!=0) {
				n-=1;
				n/=2;
				vec.pb(2);
			}
			else if (((n+1)/2)%2!=0) {
				n+=1;
				n/=2;
				vec.pb(1);
			}
			else {
				val = false;
				break;
			}
			if (n==1) break;
		}
		if (!val) cout << -1 << "\n";
		else {
			reverse(all(vec));
			cout << vec.size() << "\n";
			for (auto c: vec) cout << c << " ";
			cout << "\n";
		}
	}

	return 0;
}