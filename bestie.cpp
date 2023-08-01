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
		int arr [n];
		cin >> arr[0];
		int ans {arr[0]};
		rep (i,1,n) {
			cin >> arr[i];
			ans=gcd(ans,arr[i]);
		}
		if (ans==1)
			cout << 0 << "\n";
		else if (gcd(ans,n)==1)
			cout << 1 << "\n";
		else if (gcd(ans,n-1)==1)
			cout << 2 << "\n";
		else
			cout << 3 << "\n";
	}

	return 0;
}