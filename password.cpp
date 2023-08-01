#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define vvi vector <vector<int>>
#define pb push_back
#define mp make_pair

#define aint(a) a.begin(), a.end()
#define aintr(a) a.rbegin(), a.rend()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { a%=m; int res = 1; while (b) { if (b&1) res = res * a % m; a = a * a % m; b>>=1; } return res; }
int inv (int a, int m) { return mexp(a,m-2,m); }
int get_hash (string s) { int h = 0; for (char c: s) h = (h*31+(c-'a'+1))%M; return h; }
vector <int> rabin_karp (string s, string t) { int n = s.length(), m = t.length(); long long p = 1; for (int i = 0; i < m - 1; i++) p = (p * 31) % M; vector<int> pos; long long ht = get_hash(t); long long hs = get_hash(s.substr(0, m)); if (hs == ht) pos.push_back(0); for (int l = 1, r = m; r < n; l++, r++) { int del = ((s[l - 1] - 'a' + 1) * p) % M; int add = s[r] - 'a' + 1; hs = ((hs - del + M) * 31 + add) % M; if (hs == ht) { pos.push_back(l); } } return pos; }

int blackbox(string &s){
    int ans = 0;
    int pr = 1;
    for(int i = 0; i < s.size(); i++){
        ans = (ans + ((s[i] - 'a'+ 1ll) * pr) % M) % M;
        pr = (pr * 31ll) % M;
    }
    return ans;
}
 
int power(int base, int x){
    int ans = 1;
    while(x){
        if(x % 2 == 0){
            base = (base * base) % M;
            x = x / 2;
        }else{
            ans = (ans * base) % M;
            x--;
        }
    }
    return ans;
}
 
bool check(string &s, int len){
    string p = s.substr(0, len);
    int plen = len;
    int slen = s.length();
    int phash = blackbox(p);
    string temp = s.substr(0, plen);
    int shash = blackbox(temp);
    int cnt = 0;
    if(phash == shash){
        cnt++;
    }
    int prL = 1;
    int prR = power(31, plen);
    for(int i = plen; i < slen; i++){
        shash = (shash - ((s[i-plen] - 'a' + 1)*prL)%M + M)%M;
        shash = (shash + ((s[i]-'a'+1)*prR)%M)%M;
        phash = (phash*31)%M;
        if(shash == phash){
            cnt++;
        }
        prL = (prL*31)%M;
        prR = (prR*31)%M;
    }
    return (cnt > 2);
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
    cin >> s;
    int n = s.size();
    int hash = 0;
    int pr = 1;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        hash = (hash + ((s[i] - 'a' + 1) * pr) % M) % M;
        pr = (pr * 31ll) % M;
        h[i] = hash;
    }
    hash = 0;
    vector<int> vec;
    for(int i = n-1; i >= 0; i--){
        hash = (hash * 31ll) % M;
        hash = (hash + (s[i] - 'a' + 1)) % M;
        if(hash == h[n-i-1]){
            vec.pb(n-i-1);
        }
    }
    int low = 0;
    int high = vec.size() - 1;
    while(high >= low){
        int mid = (low + high) >> 1;
        if(check(s, vec[mid] + 1)){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(high < 0){
        cout << "Just a legend";
    }else{
        cout << s.substr(0, vec[high] + 1);
    }

	return 0;
}