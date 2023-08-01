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
		int n;
		cin >> n;
		vi vec (n);
		multiset <int> ms;
		rep (i,0,n) {
			cin >> vec[i];
			ms.insert(vec[i]);
		}
		int i {}, j {n-1};
		bool solved = false;
		while (j-i>2) {
			if (vec[i]==*ms.begin() || vec[i]==*--ms.end()) {
				ms.erase(vec[i]);
				i++;
			}
			else if (vec[j]==*ms.begin() || vec[j]==*--ms.end()) {
				ms.erase(vec[j]);
				j--;
			}
			else {
				cout << i+1 << " " << j+1 << "\n";
				solved = true;
				break;
			}
		}
		if (!solved) cout << -1 << "\n";
	}

	return 0;
}