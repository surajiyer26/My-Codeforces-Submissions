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
int mexp (int a, int b, int m) { a%=m; int res = 1; while (b) { if (b&1) res = res * a % m; a = a * a % m; b>>=1; } return res; }
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
		int n;
		cin >> n;
		vi vec1 (n), vec2(n);
		rep (i,0,n) cin >> vec1[i];
		rep (i,0,n) cin >> vec2[i];
		map <int, int> mp1, mp2;
		int cnt {1};
		rep (i,0,n) {
			if (i+1 < n && vec1[i+1] == vec1[i]) cnt += 1;
			else mp1[vec1[i]] = max(mp1[vec1[i]], cnt), cnt = 1;
		}
		cnt = 1;
		rep (i,0,n) {
			if (i+1 < n && vec2[i+1] == vec2[i]) cnt += 1;
			else mp2[vec2[i]] = max(mp2[vec2[i]], cnt), cnt = 1;
		}
		int mxn {};
		rep (i,1,2*n + 1) mxn = max(mxn, mp1[i] + mp2[i]);
		cout << mxn << "\n";
	}

	return 0;
}

// when can the problem be TRUE?
// look for what's there, not what you want to be there
// before implementing your logic, think of counter test cases
// the solution may lie in the constraints