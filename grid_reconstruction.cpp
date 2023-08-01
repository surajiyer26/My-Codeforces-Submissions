#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define vvi vector <vector<int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }
int inv (int a, int m) { return mexp(a,m-2,m); }
int get_hash (string s) { int h = 0; for (char c: s) h = (h*31+(c-'a'+1))%M; return h; }

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
		int arr [2][n];
		rep (i,0,2) rep (j,0,n) arr[i][j] = 0;
		arr [0][0] = 2*n;
		int big {2*n-2}, small {1};
		rep (i,1,n) {
			if (i%2) {
				arr[1][i-1]=small++;
				arr[0][i]=small++;
			}
			else {
				arr[0][i]=big--;			
				arr[1][i-1]=big--;			
			}
		}
		arr[1][n-1]=2*n-1;
		rep (i,0,2) {
			rep (j,0,n) {
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}