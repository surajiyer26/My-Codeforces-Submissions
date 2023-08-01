#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
#define M 1000000007

vector <int> factors (int n) {
	vector <int> temp;
	for (int i {2}; i*i<=n; ++i) {
		while (n%i==0) {
			temp.push_back(i);
			n/=i;
		}
	}
	if (n>1) temp.push_back(n);
	return temp;
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vi vec = factors(n);
	if (vec.size()<k) {
		cout << -1;
		return 0;
	}
	while (vec.size()>k) {
		vec[0]*=vec.back();
		vec.pop_back();
	}
	for (auto c: vec) cout << c << " ";

	return 0;
}