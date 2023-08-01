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
		int n, k, b, s;
		cin >> n >> k >> b >> s;
		int arr [n] {};
		arr[0]+=k*b;
		s-=k*b;
		if (s<0) {
			cout << -1 << "\n";
			continue;
		}
		for (int i {0}; i<n; ++i) {
			int temp = min(k-1,s);
			arr[i]+=temp;
			s-=temp;
		}
		if (s>0) {
			cout << -1 << "\n";
			continue;
		}
		else {
			for (int i {}; i<n; ++i)
				cout << arr[i] << " ";
			cout << "\n";
		}
	}

	return 0;
}