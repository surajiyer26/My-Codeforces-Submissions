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
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	int cnt {2}, temp {2};
	if (n==1) {
		cout << 1;
		return 0;
	}
	rep (k,2,n) {
		if (vec[k]==vec[k-1]+vec[k-2]) ++temp;
		else cnt=max(cnt,temp), temp = 2;
		if (k==n-1) cnt=max(cnt,temp); 
	}
	cout << cnt;

	return 0;
}