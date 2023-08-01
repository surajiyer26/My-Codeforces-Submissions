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

int cnt (int n) {
    return (n * (n + 1)) / 2;
}

signed main () {

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        int l = 1, r = 2 * k - 1, ans = r;
        while (r - l > -1) {
            int y = l + (r - l) / 2;
            if (y < k) {
                if (cnt(y) >= x) ans = y, r = y - 1;
                else l = y + 1; 
            }
            else {
                if (cnt(k) + cnt(k - 1) - cnt(2*k - 1 - y) >= x) ans = y, r = y - 1;
                else l = y + 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}

// when can the problem be TRUE?
// look for what's there, not what you want to be there
// before implementing your logic, think of counter test cases
// the solution may lie in the constraints
// when you can't iterate over n, you have to iterate over logn - binary search