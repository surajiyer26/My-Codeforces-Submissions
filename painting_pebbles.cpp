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

	int n, k;
	cin >> n >> k;
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	if (*max_element(all(vec))-*min_element(all(vec))>k) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	rep (i,0,n) {
		rep (j,1,vec[i]+1) {
			if (j%k==0) cout << k << " ";
			else cout << j%k << " ";
		}
		cout << "\n";
	}

	return 0;
}