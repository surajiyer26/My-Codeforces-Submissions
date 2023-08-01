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

	int n, a {}, g {};
	string s;
	cin >> n;
	while (n--) {
		int x, y;
		cin >> x >> y;
		if (abs(a+x-g)<=500) {
			a+=x;
			s+="A";
		}
		else {
			g+=y;
			s+="G";
		}
	}
	if (abs(a-g)>500) cout << -1;
	else cout << s;

	return 0;
}