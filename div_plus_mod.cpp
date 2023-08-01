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

bool prime (int a) {
	bool val = true;
	for (int i {2}; i*i<=a; ++i) {
		if (a%i==0)
			val = false;
	}
	return val;
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int l, r, a;
		cin >> l >> r >> a;
		int temp = r%a;
		temp = r-temp-1;
		int ans = INT_MIN;
		if (l<=temp&&temp<=r)
			ans=max(ans,temp/a+temp%a);
		ans=max(ans,r/a+r%a);
		cout << ans << "\n";
	}

	return 0;
}