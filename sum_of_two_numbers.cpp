#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		if (x%2==0) {
			cout << x/2 << " " << x/2 <<"\n";
		}
		else {
			int a {}, b {}, c {1};
			bool val = true;
			while (x) {
				if ((x%10)%2==0) {
					a+=((x%10)/2)*c;
					b+=((x%10)/2)*c;
				}
				else if (val) {
					a+=((x%10)/2+1)*c;
					b+=((x%10)/2)*c;
					val = false;
				}
				else {
					a+=((x%10)/2)*c;
					b+=((x%10)/2+1)*c;
					val = true;
				}
				x/=10;
				c*=10;
			}
			cout << a << " " << b << "\n";
		}
	}

	return 0;
}