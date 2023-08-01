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

int n, m;
bool visited [1001][1001];
int arr [1001][1001];

int f (int i, int j) {
    visited[i][j] = 1;
    int ans = arr[i][j];
    if (i != 0 && visited[i-1][j] == 0 && arr[i-1][j] != 0) ans += f(i-1,j);
    if (i != n && visited[i+1][j] == 0 && arr[i+1][j] != 0) ans += f(i+1,j);
    if (j != 0 && visited[i][j-1] == 0 && arr[i][j-1] != 0) ans += f(i,j-1);
    if (j != m && visited[i][j+1] == 0 && arr[i][j+1] != 0) ans += f(i,j+1);
    return ans;
}

signed main () {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        rep (i,0,n) rep (j,0,m) {
            visited[i][j] = 0;
            cin >> arr[i][j];
        }
        int lake {};
        rep (i,0,n) {
            rep (j,0,m) {
                if (visited[i][j] == 0 && arr[i][j] != 0) lake = max(lake, f(i,j));
            }
        }
        cout << lake << "\n";
    }

    return 0;
}