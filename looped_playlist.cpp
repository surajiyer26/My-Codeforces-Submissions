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

	int n, p;
	cin >> n >> p;
	vi a (n);
	int sum {};
	rep (i,0,n) {
		cin >> a[i];
		sum += a[i];
	}
	int ans {};
	if (p>=sum) {
		ans += (p/sum)*n;
		p%=sum;
	}
	if (p==0) {
		cout << 1 << " " << ans;
		return 0;
	}
	vi vec (2*n);
	rep (i,0,n) {
		vec[i]=a[i];
		vec[i+n]=a[i];
	}
	int i {}, j {}, temp {};
	int index {-1}, num = INT_MAX;
	while (j<2*n) {
		while (temp+vec[j]<p) {
			temp+=vec[j];
			j++;
		}
		if (j-i+1<num) {
			num = j-i+1;
			index = i;
		}
		temp-=vec[i++];
	}
	ans += num;
	cout << index+1  << " " << ans;

	return 0;
}