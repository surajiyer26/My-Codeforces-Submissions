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

bool f (int m, int s) {
	return s>=0 && s<=9*m;
}

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, s;
	cin >> m >> s;
	if (m==1 && s==0) {
		cout << 0 << " " << 0;
		return 0;
	}
	if (s<1 || s>m*9) {
		cout << -1 << " " << -1;
		return 0;
	}
	string minn;
	int sum = s;
    for (int i = 0; i<m; i++) {
        for (int d = 0; d < 10; d++) {
            if ((i>0 || d>0 || (m==1&&d==0)) && f(m-i-1, sum-d)) {
                minn += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
    cout << minn;
    string maxn;
    sum = s;
    for (int i = 0; i < m; i++) {
        for (int d = 9; d > -1; d--) {
            if ((i>0 || d>0 || (m==1 && d==0)) && f(m-i-1, sum-d)) {
                maxn += char('0' + d);
                sum -= d;
                break;
            }
        }
    }
    cout << " " << maxn;

	return 0;
}