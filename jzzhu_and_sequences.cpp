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

	vi vec (6);
	cin >> vec[0] >> vec[1];
	vec[2] = vec[1]-vec[0];
	rep (i,3,6) vec[i]=-vec[i-3];
	int x;
	cin >> x;
	cout << (vec[(x-1)%6]%M+M)%M;

	return 0;
}