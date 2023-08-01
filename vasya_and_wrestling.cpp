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

	int n;
	cin >> n;
	vi vec1, vec2;
	int sum {};
	int last = 0;
	rep (i,0,n) {
		int x;
		cin >> x;
		if (x>0) vec1.pb(x), last = 0;
		else vec2.pb(-x), last = 1;
		sum += x;
	}
	if (sum>0) {
		cout << "first\n";
		return 0;
	}
	else if (sum<0) {
		cout << "second\n";
		return 0;
	}
	n = min(vec1.size(),vec2.size());
	rep (i,0,n) {
		if (vec1[i]>vec2[i]) {
			cout << "first\n";
			return 0;
		}
		else if (vec1[i]<vec2[i]) {
			cout << "second\n";
			return 0;
		}
	}
	if (last==0) cout << "first\n";
	else cout << "second\n";

	return 0;
}