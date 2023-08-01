#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr [256][256];
	int cnt {};
	for (int i {}; i<256; i+=2) {
		for (int j {}; j<256; j+=2) {
			arr[i][j]=cnt;
			arr[i][j+1]=cnt+1;
			arr[i+1][j]=cnt+2;
			arr[i+1][j+1]=cnt+3;
			cnt+=4;
		}
	}
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		cout << n*m << "\n";
		rep (i,0,n) {
			rep (j,0,m) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}