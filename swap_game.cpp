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
		int arr1 [n];
		int arr2 [n];
		rep (i,0,n) {
			cin >> arr1[i];
			arr2[i]=arr1[i];
		}
		sort (arr1,arr1+n);
		if (arr1[0]==arr2[0])
			cout << "BOB\n";
		else
			cout << "ALICE\n";
	}

	return 0;
}