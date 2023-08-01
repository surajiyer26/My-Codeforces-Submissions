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
		string a, b;
		cin >> a >> b;
		if (a[0]==b[0]) cout << "YES\n" << a[0] << "*\n";
		else if (a[a.length()-1]==b[b.length()-1]) cout << "YES\n*" << a[a.length()-1] << "\n";
		else {
			char one, two;
			bool val = false;
			for (int i {}; i<a.length()-1; ++i) {
				for (int j {}; j<b.length()-1; ++j) {
					if (a[i]==b[j]&&a[i+1]==b[j+1]) {
						val = true;
						one = a[i], two = a[i+1];
						break;
					}
				}
				if (val) break;
			}
			if (val) cout << "YES\n" << "*" << one << two << "*\n"; 
			else cout << "NO\n";
		}
	}

	return 0;
}