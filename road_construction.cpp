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

	int n, m;
	cin >> n >> m;
	map <int, int> mp;
	rep (i,0,n) {
		int x, y;
		cin >> x >> y;
		mp[x]++, mp[y]++;
	}
	int temp;
	rep (i,1,n+1) if (mp[i]==0) {
		temp = i;
		break;
	}
	cout << n-1 << "\n";
	rep (i,1,n+1) {
		if (i==temp) continue;
		cout << i << " " << temp << "\n";
	}

	return 0;
}