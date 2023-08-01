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

	int n;
	cin >> n;
	// 1 2 3 4 5 ... 2n -> n(2n+1) total jumped
	// it is a multiple of n
	// it means that youre back at initial point
	// it means aage ka jumps will be symmetrical
	// it means you just have to emulate first 2n jumps
	vi vec (n);
	rep (i,0,n) vec[i] = 0;
	int jmp {1}, idx {};
	vec[idx] = 1;
	rep (i,0,2*n) {
		idx=(idx+jmp++)%n;
		vec[idx]=1;
	}
	int cnt {};
	rep (i,0,n) if (vec[i]) ++cnt;
	if (cnt==n) cout << "YES";
	else cout << "NO";

	return 0;
}