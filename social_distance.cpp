#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

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

vector <int> primes (int n) {
	vector <int> temp;
	bool primesvisited [n] {};
	rep (i,2,n+1) {
		if (primesvisited[i])
			continue;
		temp.push_back(i);
		for (int j {i}; j<=n; j+=i) {
			primesvisited[j]=1;
		}
	}
	return temp;
}

vector <int> factors (int n) {
	vector <int> temp;
	bool factorsvisited [n] {};
	rep (i,1,n+1) {
		if (factorsvisited[i])
			continue;
		if (n%i==0) {
			temp.push_back(i);
		}
		else {
			for (int j {i}; j<=n; j+=i)
				factorsvisited[j]=1;
		}
	}
	return temp;
}

signed main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a [n];
		int s {INT_MAX}, b {}, sum {};
		rep (i,0,n) {
			cin >> a[i];
			sum+=a[i];
			s=min(s,a[i]);
			b=max(b,a[i]);
		}
		if (n+sum-s+b<=m)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}