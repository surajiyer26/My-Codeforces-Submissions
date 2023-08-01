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
		int n, a, b;
		cin >> n >> a >> b;
		if (n==1) {
			cout << "Yes\n";
			continue;
		}
		if (n*2==a+b) {
			cout << "Yes\n";
			continue;
		}
		if (n-1>a+b) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}