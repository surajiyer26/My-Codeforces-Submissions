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

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vi vec (n, -1000);
		int j {};
		rep (i,1,n+1) if ((i*(i+1))/2<=k) j=i;
		rep (i,0,j) vec[i]=2;
		int rem = k - (j*(j+1))/2;
		if (j!=n && rem) vec[j] = j*-2 - 1 + rem*2;
		rep (i,0,n) cout << vec[i] << " ";
		cout << "\n";
	}

	return 0;
}