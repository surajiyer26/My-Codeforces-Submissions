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
		int arr [n];
		rep (i,0,n) cin >> arr[i];
		if (n<3) {
			cout << "YES\n";
			continue;
		}
		vector <int> vec;
		vec.pb(arr[0]);
		rep (i,1,n) {
			if (arr[i]!=arr[i-1])
				vec.pb(arr[i]);
		}
		int m = vec.size();
		if (m<3) {
			cout << "YES\n";
			continue;
		}
		bool value = true;
		rep (i,1,m-1) {
			if (vec[i]<vec[i-1]&&vec[i]<vec[i+1]) {
				value = false;
				break;
			}
		}
		if (value)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}