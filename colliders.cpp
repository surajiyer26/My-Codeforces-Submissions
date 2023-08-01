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

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vi vec (n + 1, 0);
	char sign;
	int num, one {};
	while (m--) {
		cin >> sign >> num;
		if (sign == '+') {
			if (num == 1) {
				if (one) cout << "Already on\n";
				else {
					one = 1;
					cout << "Success\n";
				}
				continue;
			}
			int temp = num;
			int val = 0;
			for (int i {2}; i * i <= num; ++i) {
				while (temp % i == 0) {
					if (vec[i]) {
						val = i;
						break;
					}
					else temp /= i;
				}
			}
			if (temp != 1) {
				if (vec[temp]) val = temp;
			}
			temp = num;
			if (val) {
				if (vec[val] == num) cout << "Already on\n";
				else cout << "Conflict with " << vec[val] << "\n";
			}
			else {
				for (int i {2}; i * i <= num; ++i) {
					while (temp % i == 0) {
						vec[i] = num;
						temp /= i;
					}
				}
				if (temp != 1) {
					vec[temp] = num;
				}
				cout << "Success\n";
			}
		}
		else {
			if (num == 1) {
				if (one) {
					one = 0;
					cout << "Success\n";
				}
				else cout << "Already off\n";
				continue;
			}
			int temp = num;
			int val = 0;
			for (int i {2}; i * i <= num; ++i) {
				while (temp % i == 0) {
					if (vec[i]) {
						val = i;
						break;
					}
					else temp /= i;
				}
			}
			if (temp != 1) {
				if (vec[temp]) val = temp;
			}
			temp = num;
			if (val == 0 || vec[val] != num) cout << "Already off\n";
			else {
				for (int i {2}; i * i <= num; ++i) {
					while (temp % i == 0) {
						vec[i] = 0;
						temp /= i;
					}
				}
				if (temp != 1) {
					vec[temp] = 0;
				}
				cout << "Success\n";
			}
		}
	}

	return 0;
}

// when can the problem be TRUE?
// look for what's there, not what you want to be there
// before implementing your logic, think of counter test cases
// the solution may lie in the constraints
// when you can't iterate over n, you have to iterate over logn - binary search