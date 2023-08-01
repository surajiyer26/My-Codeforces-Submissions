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
		int n;
		cin >> n;
		if (n%2==0) {
			cout << n/2 << " " << n/2 << "\n";
			continue;
		}
		int ans {n-1};
		for (int i {2}; i*i<=n; ++i) {
			if (n%i==0) {
				int temp1 = hcf(i,n-i);
				ans = min(ans,temp1);
				int temp2 = hcf(n/i,n-n/i);
				ans = min(ans,temp2);
			}
		}
		cout << ans << " " << n-ans << "\n";
	}

	return 0;
}