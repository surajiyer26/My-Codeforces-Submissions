#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e6+3;

int bexp (int a, int b) { if (b==0) return 1; int c = bexp(a,b/2); if (b%2==0) return c*c; return c*c*a; }
int mexp (int a, int b, int m) { if (b==0) return 1; int c = mexp(a,b/2,m); if (b%2==0) return (c*c)%m; return (c*c%m)*a%m; }
int inv (int a, int m) { return mexp(a,m-2,m); }

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector <char> vec {'>', '<', '+', '-', '.', ',', '[', ']'};
	string s;
	cin >> s;
	map <char, int> m;
	rep (i,8,16) {
		m[vec[i-8]]=i;
	}
	int n = s.length();
	string ans;
	rep (i,0,n) {
		bitset <4> bs (m[s[i]]);
		ans += bs.to_string();
	}
	bitset <400> bs (ans);
	int cnt {}, temp {};
	rep (i,0,400) {
		cnt = (cnt+bs[i]*mexp(2,temp++,M))%M;
	}
	cout << cnt;

	return 0;
}