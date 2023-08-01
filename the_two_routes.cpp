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
const int MAX = 1e6;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { a%=m; int res = 1; while (b) { if (b&1) res = res * a % m; a = a * a % m; b>>=1; } return res; }
int inv (int a, int m) { return mexp(a,m-2,m); }
int get_hash (string s) { int h = 0; for (char c: s) h = (h*31+(c-'a'+1))%M; return h; }
vector <int> rabin_karp (string s, string t) { int n = s.length(), m = t.length(); long long p = 1; for (int i = 0; i < m - 1; i++) p = (p * 31) % M; vector<int> pos; long long ht = get_hash(t); long long hs = get_hash(s.substr(0, m)); if (hs == ht) pos.push_back(0); for (int l = 1, r = m; r < n; l++, r++) { int del = ((s[l - 1] - 'a' + 1) * p) % M; int add = s[r] - 'a' + 1; hs = ((hs - del + M) * 31 + add) % M; if (hs == ht) pos.push_back(l); } return pos; }

vector <int> soe (MAX);
void make_soe () { for (int i = 2; i <= MAX; i++) soe[i] = 1; for (int i = 2; i * i <= MAX; i++) { if (soe[i] == 0) continue; for (int j = i * i; j <= MAX; j += i) soe[j] = 0; } }

vector <int> spf (MAX);
void make_spf () { for (int i = 2; i <= MAX; i++) spf[i] = i; for (int i = 2; i * i <= MAX; i++) { if (spf[i] != i) continue; for (int j = i * i; j <= MAX; j += i) if (spf[j] == j) spf[j] = i; } }

vector <int> fact (MAX);
vector <int> modinv (MAX);
void make_fact() {
	fact[0] = 1;
	modinv[0] = 1;
	for (int i = 1; i <= MAX; i++) {
		fact[i] = (fact[i - 1] * i) % M;
		modinv[i] = inv(fact[i], M);
	}
}

int ncr (int n, int r) {
	if (r > n) return 0;
	int nr = fact[n];
	int invdr = (modinv[r] * modinv[n - r]) % M;
	return (nr * invdr) % M;
}

int ncrdirect (int n, int r) {
	int res = 1;
	for (int i = 1; i <= min(r, n - r); i++) res = (res * (n - i + 1)) / i;
	return res;
}

vii adj [405];
vii adj2 [405];

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	set <pair<int, int>> s;

	rep (i,0,m) {
		int u, v;
		cin >> u >> v;
		adj[u].pb({v, 1});
		adj[v].pb({u, 1});
		s.insert({u, v});
		s.insert({v, u});
	}

	rep (i,1,n + 1) {
		rep (j,1,n + 1) {
			if (i == j) continue;
			if (s.count({i, j})) continue;
			adj2[i].pb({j, 1});
			adj2[j].pb({i, 1});
		}
	}
	
	int rail [n + 1];
	bool vis1 [n + 1];
	priority_queue<pair<int,int>> q;
	for (int i = 1; i <= n; i++) rail[i] = INT_MAX, vis1[i] = 0;
	rail[1] = 0;
	q.push({0,1});
	while (!q.empty()) {
		int a = q.top().second; q.pop();
		if (vis1[a]) continue;
		vis1[a] = true;
		for (auto u : adj[a]) {
			int b = u.first, w = u.second;
			if (rail[a]+w < rail[b]) {
				rail[b] = rail[a]+w;
				q.push({-rail[b],b});
			}
		}
	}

	int road [n + 1];
	bool vis2 [n + 1];
	priority_queue<pair<int,int>> q2;
	for (int i = 1; i <= n; i++) road[i] = INT_MAX, vis2[i] = 0;
	road[1] = 0;
	q2.push({0,1});
	while (!q2.empty()) {
		int a = q2.top().second; q2.pop();
		if (vis2[a]) continue;
		vis2[a] = true;
		for (auto u : adj2[a]) {
			int b = u.first, w = u.second;
			if (road[a]+w < road[b]) {
				road[b] = road[a]+w;
				q2.push({-road[b],b});
			}
		}
	}

	if (vis1[n] && vis2[n]) cout << max(rail[n], road[n]);
	else cout << -1;

	return 0;
}

// when can the problem be TRUE?
// look for what's there, not what you want to be there
// before implementing your logic, think of counter test cases
// the solution may lie in the constraints
// when you can't iterate over n, you have to iterate over logn - binary search