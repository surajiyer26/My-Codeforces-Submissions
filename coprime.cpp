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
		int n;
		cin >> n;
		int arr [n];
		rep (i,0,n) cin >> arr[i];
		map <int, int> m;
		repr (i,n-1,-1) {
			if (m[arr[i]])
				continue;
			else
				m[arr[i]]=i+1;
		}
		int sum {};
		for (auto c: m) {
			for (auto d: m) {
				if (gcd(c.first,d.first)==1)
					sum=max(sum,c.second+d.second);
			}
		}
		if (sum)
			cout << sum << "\n";
		else
			cout << -1 << "\n";
	}

	return 0;
}