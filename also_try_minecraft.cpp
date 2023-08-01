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

	int n, m;
	cin >> n >> m;
	int arr [n];
	rep (i,0,n)
		cin >> arr[i];
	int pre [n+1];
	int suf [n+1];
	for (int i {1}; i<n; ++i)
		pre[i+1]=pre[i]+((arr[i-1]>arr[i])?arr[i-1]-arr[i]:0);
	for (int i {n-2}; i>-1; --i)
		suf[i+1]=suf[i+2]+((arr[i+1]>arr[i])?arr[i+1]-arr[i]:0);
	while (m--) {
		int a, b;
		cin >> a >> b;
		if (a<b)
			cout << pre[b]-pre[a] << "\n";
		else
			cout << suf[b]-suf[a] << "\n";
	}


	return 0;
}