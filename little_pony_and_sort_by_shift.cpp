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

	int n;
	cin >> n;
	vi vec (n);
	rep (i,0,n) cin >> vec[i];
	int temp {}, cnt {};
	rep (i,0,n-1) if (vec[i]>vec[i+1]) temp = i, cnt++;
	if (vec[n-1]>vec[0]) temp = n-1, ++cnt;
	if (cnt==0) cout << 0;
	else if (cnt>1) cout << -1;
	else cout << n-1-temp;

	return 0;
}