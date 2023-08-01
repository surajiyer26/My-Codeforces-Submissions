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
		map <int,int> m;
		rep (i,0,n) {
			cin >> arr[i];
			m[arr[i]]++;
		}
		bool value = true;
		for (auto c: m)
			if (c.second==1)
				value = false;
		if (!value) {
			cout << -1 << "\n";
			continue;
		}
		int i = 1;
		for (auto c: m) {
			int l = i+c.second-1;
			// i=1 l=5
			if ((l-i+1)%2) {
				cout << l << " ";
				for (int j {i}; j<l; ++j)
					cout << j << " ";
			}
			else {
				for (int j {i+1}; j<=l; j+=2)
					cout << j << " " << j-1 << " ";
			}
			i = l+1;
		}
		cout << "\n";
	}

	return 0;
}