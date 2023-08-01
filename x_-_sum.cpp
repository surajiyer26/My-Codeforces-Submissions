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
		int n, m;
		cin >> n >> m;
		int arr [n][m];
		rep (i,0,n) {
			rep (j,0,m) {
				cin >> arr [i][j];
			}
		}
		int ans {};
		rep (i,0,n) {
			rep (j,0,m) {
				int ki {i}, kj {j};
				int temp {};
				// down right
				while (ki<n && kj<m && ki>-1 && kj>-1) {
					temp+=arr[ki][kj];
					++ki;
					++kj;
				}
				ki=i;
				kj=j;
				// down left
				while (ki<n && kj<m && ki>-1 && kj>-1) {
					temp+=arr[ki][kj];
					++ki;
					--kj;
				}
				ki=i;
				kj=j;
				// up left
				while (ki<n && kj<m && ki>-1 && kj>-1) {
					temp+=arr[ki][kj];
					--ki;
					--kj;
				}
				ki=i;
				kj=j;
				// up right
				while (ki<n && kj<m && ki>-1 && kj>-1) {
					temp+=arr[ki][kj];
					--ki;
					++kj;
				}
				ki=i;
				kj=j;
				// done
				temp-=arr[i][j]*3;
				ans = max (temp, ans);
			}
		}
		cout << ans << "\n";
	}

	return 0;
}