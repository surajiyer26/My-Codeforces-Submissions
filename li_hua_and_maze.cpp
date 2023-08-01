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
vector <int> rabin_karp (string s, string t) { int n = s.length(), m = t.length(); long long p = 1; for (int i = 0; i < m - 1; i++) p = (p * 31) % M; vector<int> pos; long long ht = get_hash(t); long long hs = get_hash(s.substr(0, m)); if (hs == ht) pos.push_back(0); for (int l = 1, r = m; r < n; l++, r++) { int del = ((s[l - 1] - 'a' + 1) * p) % M; int add = s[r] - 'a' + 1; hs = ((hs - del + M) * 31 + add) % M; if (hs == ht) pos.push_back(l); } return pos; }

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
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if ((x1==1&&y1==1) || (x1==1&&y1==m) || (x1==n&&y1==1) || (x1==n&&y1==m)) {
			cout << 2 << "\n";
			continue;
		}
		swap(x1,x2), swap(y1,y2);
		if ((x1==1&&y1==1) || (x1==1&&y1==m) || (x1==n&&y1==1) || (x1==n&&y1==m)) {
			cout << 2 << "\n";
			continue;
		}
		if (x1==1 || y1==1 || x1==n || y1==m) {
			cout << 3 << "\n";
			continue;
		}
		swap(x1,x2), swap(y1,y2);
		if (x1==1 || y1==1 || x1==n || y1==m) {
			cout << 3 << "\n";
			continue;
		}
		cout << 4 << "\n";
	}

	return 0;
}