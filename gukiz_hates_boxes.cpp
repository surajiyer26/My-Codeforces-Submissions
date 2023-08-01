#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }
int inv (int a, int m) { return mexp(a,m-2,m); }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	int zero = 0;
	int l = 2, r = n + accumulate(all(vec), zero);
	while (r-l>0) {
		int mid = l + (r-l)/2;
		vi vec2 = vec;
		int pos {n-1};
		rep (i,0,m) {
			while (pos>=0 && vec2[pos]==0) --pos;
			int tim = mid-pos-1;
			if (tim<=0) break;
			while (pos>=0 && vec2[pos]<=tim) tim -= vec2[pos--];
			if (pos>=0) vec2[pos] -= tim;
		}
		if (pos<0) r = mid;
		else l = mid + 1;
	}
	cout << r;

	return 0;
}