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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		list <list <int>> lis (n);
		int l {1}, r {n*n};
		rep (i,0,n) {
			list <int> templis;
			if (i%2==0) {
				rep (j,0,n) {
					if (j%2==0) {
						templis.push_back(l++);
					}
					else {
						templis.push_back(r--);
					}
				}
			}
			else {
				repr (j,n-1,-1) {
					if (j%2==1) {
						templis.push_front(l++);
					}
					else {
						templis.push_front(r--);
					}
				}
			}
			lis.push_back(templis);
		}
		for (auto li: lis) {
			for (auto l: li) {
				cout << l << " ";
			}
			if (li.size()!=0)
				cout << "\n";
		}
	}

	return 0;
}