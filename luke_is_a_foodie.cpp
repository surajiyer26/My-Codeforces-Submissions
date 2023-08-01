#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

#define pb push_back
#define mp make_pair

#define int int_fast64_t
#define M 1000000007

int gcd (int a, int b) {
	if (b==0) 
		return a;
	return gcd(b, a%b);
}

int hcf (int a, int b) {
	return (a*b)/gcd(a,b);
}

int fact (int a) {
	if (a==0)
		return 1;
	else
		return a*fact(a-1);
}

signed main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int arr [n];
		rep (i,0,n) cin >> arr[i];
		int l = (arr[0]-x<0)?0:arr[0]-x;
		int r = arr[0]+x;
		int cnt {};
		rep (i,1,n) {
			int tl = (arr[i]-x<0)?0:arr[i]-x;
			int tr = arr[i]+x;
			if (tl>r || tr<l)
				cnt++, l=tl, r=tr;
			l = max (l,tl);
			r = min (r,tr);
		}
		cout << cnt << "\n";
	}

	return 0;
}