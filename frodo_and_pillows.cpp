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

bool f (int n, int a, int m, int k) {
	int l, r, left = 0, right = 0, tem;
	if (a<=k) left = k-a;
	if (a<=n-k+1) right = n-k+1-a;
	left+=((a-1)*a)/2;
	right+=((a-1)*a)/2;
	if(k<a) {
		tem = a-k;
		left -= ((tem+1)*tem)/2;
	}
	if(n-k+1<a){
		tem = a-n+k-1;
		right -= ((tem+1)*tem)/2;
	}
	int sum = a + left + right;
	return sum <= m;
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	int l = 1, r = m;
	while (l<r) {
		int mid = l + (r-l+1)/2;
		if (f(n, mid, m, k)) l = mid;
		else r = mid-1;
	}
	cout << l;

	return 0;
}