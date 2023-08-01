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

    string s;
    cin >> s;
    int n = s.length();
    int k;
    cin >> k;
    int arr [26][26];
    rep (i,0,26) rep (j,0,26) arr[i][j] = 0;
    while (k--) {
        string t;
        cin >> t;
        arr[t[0]-'a'][t[1]-'a'] = 1, arr[t[1]-'a'][t[0]-'a'] = 1;
    }
    int ans {};
    for (int i {}; i<n; ) {
        if (arr[s[i]-'a'][s[i+1]-'a']) {
            int a {}, b {};
            int j = i;
            while (j>-1 && s[i]==s[j]) ++a, --j;
            j = i + 1;
            while (j<n && (s[j]==s[i+1] || s[j]==s[i])) b += (s[j]==s[i+1]), a += (s[j]==s[i]), j++;
            ans += min(a,b);
            i = j;
        }
        else i++;
    }
    cout << ans;

    return 0;
}