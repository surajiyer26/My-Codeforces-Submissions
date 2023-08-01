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

int gcd (int a, int b) {
	if (b==0) return a;
	return gcd (b,a%b);
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// gcd(x,y) = gcd(x-y,y) where gcd(x,0) = x
	// goes for multiple arguments as well
	// gcd(a1,a2,a3...an) = gcd(a1,a2-a1,a3-a1...an-a1)
	int n, m;
	cin >> n >> m;
	vi a (n);
	vi b (m);
	rep (i,0,n) cin>>a[i];
	rep (i,0,m) cin>>b[i];
	int temp {};
	rep (i,1,n) a[i]-=a[0];
	rep (i,1,n) temp=gcd(temp,a[i]);
	rep (i,0,m) {
		cout << abs(gcd(temp,a[0]+b[i])) << " ";
	}

	return 0;
}