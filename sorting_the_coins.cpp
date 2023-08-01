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

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vi vec (n);
	rep (i,0,n) vec[i] = 0;
	cout << 1 << " ";
	int j = n-1;
	int x;
	int sum {};
	rep (i,0,n-1) {
		cin >> x;
		vec[x-1]=1;
		sum++;
		while (vec[j]!=0) {
			j--;
			sum--;
		}
		// cout << accumulate(vec.begin(),vec.begin()+j,0)+1 << " ";
		cout << sum+1 << " ";
	}
	cin >> x;
	cout << 1;

	return 0;
}