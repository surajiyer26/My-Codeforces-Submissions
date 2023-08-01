#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
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
		cout << n/2 + n%2 << "\n";
		int i = 1, j = 3*n;
		if (n%2==0) {
			for (int k {}; k<n/2; ++k) {
				cout << i << " " << j << "\n";
				i+=3;
				j-=3;
			}
		}
		else {
			for (int k {}; k<n/2; ++k) {
				cout << i << " " << j << "\n";
				i+=3;
				j-=3;
			}
			cout << 2 << " " << j << "\n";
		}
	}

	return 0;
}